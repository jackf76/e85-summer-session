# Wally Coremark Makefile
# James Kaden Cassidy 1/1/2026 kacassidy@hmc.edu
# SPDX-License-Identifier: Apache-2.0 WITH SHL-2.1

# ============================================================
#              Processor / Testbench Configuration
# ============================================================

# ---- Processor / Testbench Configuration ---- #
XLEN 				?= 32

PROCESSOR_DIR   	?= $(CURDIR)/sample_processor/src      # Directory containing all PROCESSOR RTL (will scan for .sv / .svh)
INC_DIR       		?= $(CURDIR)/sample_processor/incdir/  # Optional directory for include files for RTL compilation (parameters)

PROCESSOR_TOP 		?= riscvsingle # top-level module name
PROCESSOR_CONFIG 	?= $(CURDIR)/sample_processor/config

#--trace-all
SAIL_TRACE_FLAGS 	?= --trace-all

# ----    Synthesis Configuration ---- #
SYNTH_TECH 			?= sky130 #tsmc28 #tsmc28psyn
SYNTH_TOP 			?= $(PROCESSOR_TOP) # change to different module to find critical path of a specific module

# ----    Coremark Configuration ---- #

#ARCH := rv$(XLEN)im_zicsr_zba_zbb_zbs
#ARCH := rv$(XLEN)gc
#ARCH := rv$(XLEN)imc_zicsr
#ARCH := rv$(XLEN)im_zicsr
ARCH := rv$(XLEN)i_zicsr

# ---- Command line optional parameters ---- #
ELFS 				?=
GUI  				?= 0
SAIL  				?= 0
VERILATOR_EXTRA_FLAGS ?= # Extra verilate/compile flags if you want them

# Optional extra plusargs you can add without touching the recipe
SIM_PLUSARGS_EXTRA  ?=

# ---- Command line optional parameters ---- #
# (moved to top knobs)

# ---- Repo paths ---- #
LINKER			?= $(PROCESSOR_CONFIG)/link.ld

TB_TOP          ?= testbench
TESTBENCH_FILES ?= $(TESTBENCH_DIR)/testbench.sv $(TESTBENCH_DIR)/ram1p1rwb.sv
WAVES_DO        ?= $(TESTBENCH_DIR)/waves.do

# ---- Repo paths cont ---- #
COREMARK_DIR 	?= $(CURDIR)/coremark
C_TEST_DIR		?= $(CURDIR)/tests/C
ACT4_TEST_DIR	?= $(CURDIR)/tests/act4
BRINGUP_TEST_DIR?= $(CURDIR)/tests/bringup
TESTBENCH_DIR 	?= $(CURDIR)/tb
SYNTH_DIR 		?= $(CURDIR)/synth

WORK_DIR        ?= $(CURDIR)/work
RISCV_ARCH_TEST ?= $(WALLY)/addins/riscv-arch-test-cvw

TEST_WORK_DIR	?= $(ACT4_TEST_DIR)/work
C_TEST_WORK_DIR ?= $(C_TEST_DIR)/work
CM_WORK_DIR		?= $(COREMARK_DIR)/work

# ----    Simulation Settings (Verilator)   ---- #
VERILATOR        	?= verilator
VERILATOR_OBJ_DIR	?= $(WORK_DIR)/obj_dir
SIM_BIN          	?= $(VERILATOR_OBJ_DIR)/V$(TB_TOP)

# --binary: verilate + compile + link into one executable
# --timing: support #delays / clock-gen in the SV testbench
# --trace: compile in VCD tracing (only active when TB calls $dumpvars via +WAVES).
#          VCD needs no extra libs; for FST use --trace-fst (requires zlib1g-dev).
# -Wno-fatal: don't let lint nits abort the sim build (use `make lint` for real linting)
VERILATOR_FLAGS  	?= --binary --timing --trace \
	--top-module $(TB_TOP) \
	-Wno-fatal -Wno-TIMESCALEMOD \
	-Mdir $(VERILATOR_OBJ_DIR) -o V$(TB_TOP)

# ----    Tools    ---- #
PYTHON 		:= python3
SAIL_RUN   	:= sail_riscv_sim
TOOLPREFIX 	:= riscv64-unknown-elf-

# Derive tools from the prefix
CC      := $(TOOLPREFIX)gcc
OBJDUMP := $(TOOLPREFIX)objdump
READELF := $(TOOLPREFIX)readelf
SIZE    := $(TOOLPREFIX)size
ELF2HEX := elf2hex

# ----    Coremark Parameters ---- #
# (moved into coremark/Makefile)
ABI := $(if $(findstring "64","$(XLEN)"),lp64,ilp32)

# ----    Files and Directories    ---- #
SV_PACKAGES := $(sort $(shell find $(PROCESSOR_DIR) -type f -name '*.pkg'))
SV_SOURCES 	:= $(sort $(shell find $(PROCESSOR_DIR) -type f \( -name "*.sv" -o -name "*.svh" \)) $(shell find $(INC_DIR) -type f \( -name "*.sv" -o -name "*.svh" \)))
TEST_ELFS  	= $(sort $(shell find -L $(ACT4_TEST_DIR) -type f -name '*.elf'))

# ----          Targets            ---- #

# Default target: just build (compile RTL/testbench once)
all: build

.PHONY: lint
lint:
	@verilator --lint-only \
		--top-module $(PROCESSOR_TOP) \
		-DPROCESSOR_TOP=$(PROCESSOR_TOP) \
		-I$(abspath $(INC_DIR)) \
		$(abspath $(SV_PACKAGES) $(SV_SOURCES) $(TESTBENCH_FILES)) \
		-Wall -Wno-UNUSEDSIGNAL -Wno-VARHIDDEN -Wno-TIMESCALEMOD \
		&& echo "[LINT] Linting completed without errors."
# -Wno-DECLFILENAME -Wno-CASEX

# Build = verilate + compile the whole design + testbench into one executable
.PHONY: build
$(SIM_BIN): $(SV_PACKAGES) $(SV_SOURCES) $(TESTBENCH_FILES) Makefile
	@echo "[BUILD] Verilating design + testbench with Verilator..."
	@mkdir -p $(WORK_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_EXTRA_FLAGS) \
		+define+PROCESSOR_TOP=$(PROCESSOR_TOP) \
		+define+XLEN=$(XLEN) \
		+incdir+$(abspath $(INC_DIR)) \
		$(abspath $(SV_PACKAGES) $(SV_SOURCES) $(TESTBENCH_FILES))
	@echo "[BUILD] Built $(SIM_BIN)"

build: $(SIM_BIN) Makefile

# ----  Generic memfile / run / test flow  ---- #

# Any file -> file.memfile
.PRECIOUS: %.memfile
%.memfile: %.elf
	@echo "[MEM] Generating memfile $@ from $< along with debug files"
	$(SIZE) -A $< > $<.size
	$(READELF) -S $< > $<.read
	$(OBJDUMP) -D $< > $<.objdump
	$(ELF2HEX) $< $@
	extractFunctionRadix.sh $<.objdump

#   Use: make run ELFS="path/to/a.elf path/to/b.elf" [-j]
.PHONY: run
run: $(addsuffix .run,$(basename $(ELFS)))

# Generate score for the project based on coremark score and timing
.PHONY: score
score:
	@$(PYTHON) $(CURDIR)/bin/score.py $(SYNTH_DIR)/work $(CM_WORK_DIR) --output-log $(CURDIR)/score.log

ifeq ($(SAIL),1)
RUNNER := sail
else
RUNNER := processor
endif

# foo.elf.run depends on foo.elf.memfile and build
%.run: %.$(RUNNER) Makefile
	@:

%.sail: %.elf Makefile
	$(SAIL_RUN) $< \
	--config $(PROCESSOR_CONFIG)/sail.json \
	$(SAIL_TRACE_FLAGS) \
	--trace-output $@.trace \
	 > $@.log 2>&1


# GUI=1: dump an FST waveform (+WAVES) and open it in GTKWave after the run.
# Verilator has no interactive GUI sim like Questa; it produces wave files instead.
ifeq ($(GUI),1)
  SIM_WAVE_PLUSARG = +WAVES="$$ELF.vcd"
else
  SIM_WAVE_PLUSARG =
endif

# Sim plusargs in one place (shell vars, so they expand correctly inside %.processor)
SIM_PLUSARGS_BASE  ?= \
	+TESTNAME="$$NAME" \
	+MEMFILE="$$MEMFILE" \
	+ENTRY_ADDR="$$ENTRY_ADDR" \
	+TOHOST_ADDR="$$TOHOST_ADDR" \
	+DMEM_BASE_ADDR="$$DMEM_BASE_ADDR"

%.processor: %.memfile $(SIM_BIN) Makefile
	@set -e; \
	MEMFILE="$(abspath $<)"; \
	ELF="$${MEMFILE%.memfile}.elf"; \
	ENTRY_ADDR="$$(riscv64-unknown-elf-readelf -h "$$ELF" | awk '/Entry point address:/ {print $$NF}')"; \
	TOHOST_ADDR="$$(riscv64-unknown-elf-readelf --syms --wide "$$ELF" | awk '$$NF=="tohost" {print "0x"$$2; exit}')"; \
	DMEM_BASE_ADDR="$$(riscv64-unknown-elf-readelf --syms --wide "$$ELF" | awk '$$NF=="dmem_base" {print "0x"$$2; exit}')"; \
	NAME="$${ELF##*/}"; \
	LOGFILE="$${ELF}.sim.log"; \
	echo "[RUN] ELF: $$ELF"; \
	echo "[SIM] Using memfile $$MEMFILE (log: $$LOGFILE)"; \
	$(SIM_BIN) \
		$(SIM_PLUSARGS_BASE) $(SIM_PLUSARGS_EXTRA) $(SIM_WAVE_PLUSARG) \
		2>&1 | { [ "$(GUI)" = "1" ] && tee "$$LOGFILE" || cat >"$$LOGFILE"; }; \
	if [ "$(GUI)" = "1" ]; then \
		echo "[WAVES] Opening $$ELF.vcd in GTKWave"; \
		gtkwave "$$ELF.vcd" >/dev/null 2>&1 & \
	fi


.PHONY: synth
synth: lint
	$(MAKE) -C $(SYNTH_DIR) \
		SYNTH_TECH=$(SYNTH_TECH) PROCESSOR_DIR=$(PROCESSOR_DIR) INC_DIR=$(INC_DIR) \
		PROCESSOR_TOP=$(PROCESSOR_TOP) XLEN=$(XLEN) SYNTH_TOP=$(SYNTH_TOP)


# ----  C test flow  ---- #
# (build moved into tests/C/Makefile)

.PHONY: C_test
C_test:
	@$(MAKE) -C $(C_TEST_DIR) \
		XLEN=$(XLEN) ARCH="$(ARCH)" ABI=$(ABI) LINKER=$(LINKER) TOOLPREFIX=$(TOOLPREFIX) \
		$(C_TEST_DIR)/work/c_test.elf
	@$(MAKE) run ELFS="$(C_TEST_DIR)/work/c_test.elf"

# ----  Bringup test flow  ---- #
# (build moved into tests/bringup/Makefile)

.PHONY: bringup_test
bringup_test:
	@$(MAKE) -C $(BRINGUP_TEST_DIR) \
		XLEN=$(XLEN) ARCH="$(ARCH)" ABI=$(ABI) TOOLPREFIX=$(TOOLPREFIX)
	@$(MAKE) run ELFS="$(BRINGUP_TEST_DIR)/work/bringup.elf"

# ----  Coremark flow  ---- #
# (build moved into coremark/Makefile)

.PHONY: coremark
coremark:
	@$(MAKE) -C $(COREMARK_DIR) \
		XLEN=$(XLEN) ARCH="$(ARCH)" ABI=$(ABI) LINKER=$(LINKER) TOOLPREFIX=$(TOOLPREFIX)
	@$(MAKE) run ELFS="$(COREMARK_DIR)/work/coremark.bare.riscv.elf"

# ---- Act4 flow ---- #
# (population moved into tests/act4/Makefile)

.PHONY: act4
act4:
	@$(MAKE) -C $(ACT4_TEST_DIR) \
		RISCV_ARCH_TEST=$(RISCV_ARCH_TEST) \
		CONFIG_FILES=$(PROCESSOR_CONFIG)/test_config.yaml \
		populate

# test: run ALL .elf files in ACT4_TEST_DIR in parallel with -j
.PHONY: test
test: | act4
	@echo "CURDIR=$(CURDIR)"
	@echo "ACT4_TEST_DIR=$(ACT4_TEST_DIR)"
	@$(MAKE) run ELFS="$$( $(MAKE) -s -C $(ACT4_TEST_DIR) list-elfs )"
	@cd $(ACT4_TEST_DIR) && $(PYTHON) ../../bin/scan_test_logs.py --sail $(SAIL)

%.bin: %.hex
	@sed -E 's/^[[:space:]]*#[[:space:]]*//; s/^[[:space:]]+//; /^[[:space:]]*$$/d' $< | \
	$(PYTHON) -c 'import sys,struct; \
	[sys.stdout.buffer.write(struct.pack("<I", int(l.strip(),16))) for l in sys.stdin if l.strip()]' \
	> $@

%.dis: %.bin
	@riscv64-unknown-elf-objdump -D -b binary -m riscv:rv32 $< > $@
	@echo "Wrote $@"

# ----  Bug lab  ---- #

.PHONY: bug
bug:
	$(CURDIR)/bug_scripts/bugall_riscvsingle.sh

# ----            Clean             ---- #

.PHONY: clean, clean-act4, clean-coremark, clean-synth

clean:
	$(MAKE) -C $(C_TEST_DIR) clean
	$(MAKE) -C $(BRINGUP_TEST_DIR) clean
	rm -rf $(WORK_DIR)
	rm -f score.log

clean-coremark:
	$(MAKE) -C $(COREMARK_DIR) clean

clean-act4:
	$(MAKE) -C $(ACT4_TEST_DIR) clean

clean-synth:
	$(MAKE) -C $(SYNTH_DIR) clean

clean-all: clean clean-act4 clean-synth clean-coremark
