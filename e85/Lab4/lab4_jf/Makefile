LAB_DIR := $(CURDIR)

.PHONY: lab4-adventure-sim clean

lab4-adventure-sim:
	$(MAKE) -C .. sim \
		SIM_NAME=adventure \
		TB_TOP=testbench \
		SRCS="adventure.sv testbench.sv" \
		RUN_DIR=$(LAB_DIR)

clean:
	$(MAKE) -C .. clean RUN_DIR=$(LAB_DIR)