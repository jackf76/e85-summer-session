module testbench();
  localparam int NUM_TEST_VECTORS = 14;

  logic clk, reset;
  logic left, right, la, lb, lc, ra, rb, rc;
  logic [5:0] expected;
  logic [31:0] vectornum, errors;
  logic [7:0] testvectors[10000:0];
  logic [7:0] vec;

  thunderbird dut(clk, reset, left, right, la, lb, lc, ra, rb, rc);

  initial clk = 0;
  always #5 clk = ~clk;

  initial begin
    integer i;

    $system("mkdir -p waves");
    $dumpfile("waves/thunderbird.vcd");
    $dumpvars(0, dut);

    $readmemb("thunderbird.tv", testvectors);
    vectornum = 0;
    errors = 0;
    reset = 1;

    repeat (3) @(posedge clk);
    reset = 0;

    for (i = 0; i < NUM_TEST_VECTORS; i = i + 1) begin
      @(posedge clk);
      vec = testvectors[i];

      #1;
      left = vec[7];
      right = vec[6];
      expected = {vec[5], vec[4], vec[3], vec[2], vec[1], vec[0]};

      @(negedge clk);
      if ({la, lb, lc, ra, rb, rc} !== expected) begin
        $display("Error: inputs = %b", {left, right});
        $display(" outputs = %b %b %b %b %b %b (%b expected)",
                 la, lb, lc, ra, rb, rc, expected);
        errors = errors + 1;
      end
      vectornum = vectornum + 1;
    end

    $display("%0d tests completed with %0d errors", vectornum, errors);
    $finish;
  end
endmodule