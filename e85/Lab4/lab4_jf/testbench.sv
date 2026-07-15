module testbench();
  localparam int NUM_TEST_VECTORS = 14;

  logic clk, reset;
  logic N, S, E, W, WIN, DIE;
  logic [1:0] expected;
  logic [31:0] vectornum, errors;
  logic [7:0] testvectors[10000:0];
  logic [6:0] vec;

  adventure dut(N, S, E, W, clk, reset, WIN, DIE);

  initial clk = 0;
  always #5 clk = ~clk;

  initial begin
    integer i;

    $system("mkdir -p waves");
    $dumpfile("waves/adventure.vcd");
    $dumpvars(0, dut);

    $readmemb("adventure.tv", testvectors);
    vectornum = 0;
    errors = 0;
    reset = 1;
    N = 0;
    S = 0;
    E = 0;
    W = 0;

    repeat (3) @(posedge clk);
    reset = 0;

    for (i = 0; i < NUM_TEST_VECTORS; i = i + 1) begin
      @(posedge clk);
      vec = testvectors[i];
      {reset, N, S, E, W, expected} = vec;
      #1;

      @(negedge clk);
      if ({WIN, DIE} !== expected) begin
         $display("Error at vector %0d", vectornum);
         $display("Inputs: reset=%b N=%b S=%b E=%b W=%b", reset, N, S, E, W);
         $display("Actual: WIN=%b DIE=%b", WIN, DIE);
         $display("Expected: WIN=%b DIE=%b", expected[1], expected[0]);
        errors = errors + 1;
      end
      vectornum = vectornum + 1;
    end

    $display("%0d tests completed with %0d errors", vectornum, errors);
    $finish;
  end
endmodule