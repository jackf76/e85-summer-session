The main mental shift is this: Questa directly interprets/simulates your HDL, while Verilator translates your Verilog/SystemVerilog into C++ and builds an executable simulation. So the command flow changes from “compile HDL, elaborate, run simulator GUI/CLI” to “verilate HDL, compile generated C++, run the produced binary.” Verilator’s own docs describe it as converting Verilog/SystemVerilog into C++/SystemC models, not as a traditional event-driven simulator like Questa.

Typical Questa flow

You might currently do something like:

vlib work
vlog rtl/*.sv tb/*.sv
vsim work.tb_top
run -all

Or with waves:

add wave -r /*
run -all

Questa is very friendly to pure SystemVerilog testbenches, GUI debugging, force, interactive stepping, UVM, 4-state behavior, and waveform inspection.

Typical Verilator flow

For a simple SystemVerilog testbench, modern Verilator can be very direct:

verilator --binary --timing -Wall rtl/*.sv tb/tb_top.sv --top-module tb_top
./obj_dir/Vtb_top

--binary is the convenient newer path: Verilator translates the design and builds the executable for you. The docs say --binary translates the design into an executable by generating C++ and compiling it.

Older/common explicit form:

verilator --cc --exe --build --timing -Wall rtl/*.sv tb/tb.cpp --top-module top
./obj_dir/Vtop

That version assumes you have a C++ testbench called tb.cpp.

Biggest usage difference

With Questa, this is normal:

initial begin
  clk = 0;
  forever #5 clk = ~clk;
end

With older Verilator workflows, people often wrote the clock in C++ instead. With modern Verilator 5+, # delays and timing constructs are supported through --timing, but you should still expect Verilator to be less forgiving than Questa for complex behavioral/UVM-style testbenches. Verilator is best when your RTL is mostly synthesizable and your testbench is simple SV or C++ driven.

Can you view waveforms?

Yes. Verilator can dump waveform files, usually VCD or FST, and then you view them with a separate viewer like GTKWave. Verilator does not replace Questa’s integrated waveform GUI; it generates wave files that another program opens.

Simple SystemVerilog testbench waveform dumping:

initial begin
  $dumpfile("wave.vcd");
  $dumpvars(0, tb_top);
end

Then build/run with tracing enabled:

verilator --binary --timing --trace -Wall rtl/*.sv tb/tb_top.sv --top-module tb_top
./obj_dir/Vtb_top
gtkwave wave.vcd

For FST, which is often better for larger designs:

initial begin
  $dumpfile("wave.fst");
  $dumpvars(0, tb_top);
end

Command:

verilator --binary --timing --trace-fst -Wall rtl/*.sv tb/tb_top.sv --top-module tb_top
./obj_dir/Vtb_top
gtkwave wave.fst

Verilator’s FAQ also notes that tracing support is handled automatically when using --binary or --exe, which is why the simple flow above works.

Practical replacement cheat sheet
Questa	Verilator
vlog files.sv	verilator --binary files.sv or verilator --cc ...
vsim work.tb_top	./obj_dir/Vtb_top
run -all	Your executable runs until $finish
Integrated waveform GUI	Dump .vcd / .fst, open in GTKWave
Strong SystemVerilog/UVM support	Best for synthesizable RTL + simpler TBs
4-state logic emphasis: 0/1/X/Z	Mostly 2-state compiled simulation; X behavior differs
Interactive debug	Rebuild/rerun style, C++/waveform/log driven
My recommendation

For your likely use case, keep your Questa testbench as the golden/reference testbench, then make a Verilator path for fast iteration.

Start with:

verilator --binary --timing --trace-fst -Wall \
  rtl/*.sv tb/tb_top.sv \
  --top-module tb_top

./obj_dir/Vtb_top
gtkwave wave.fst

Then, if Verilator complains about unsupported testbench constructs, either simplify the SV testbench or move the driving logic into a small C++ harness. Verilator is usually faster, cleaner for CI, and great for processor/RTL projects, but Questa is still better when you need full simulator features, UVM-heavy testing, interactive debugging, or exact 4-state semantics.