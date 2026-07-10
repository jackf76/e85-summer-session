LAB_DIR := $(CURDIR)

.PHONY: lab3-thunderbird-sim clean

lab3-thunderbird-sim:
	$(MAKE) -C .. sim \
		SIM_NAME=thunderbird \
		TB_TOP=testbench \
		SRCS="thunderbird.sv thunderbird_tb.sv" \
		RUN_DIR=$(LAB_DIR)

clean:
	$(MAKE) -C .. clean RUN_DIR=$(LAB_DIR)