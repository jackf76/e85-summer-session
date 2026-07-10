module thunderbird(
    input logic clk,
    input logic reset,
    input logic left, right,
    output logic la, lb, lc, ra, rb, rc
);

logic s2, s1, s0;
wire w0, w1, w2, w3, w4, w5, w6, w7, w8, w9;

and(w0, ~left, ~s0, ~s1, right);
nand(w1, s1, s0);
and(w2, w1, s2);
or(w3, w2, w0);
xor(w4, s0, s1);
xor(w5, left, right);
and(w6, w5, ~s0, ~s1);
and(w7, ~s0, s1);
or(w8, w7, w6);

flopr ff_s2(clk, reset, w3, s2);
flopr ff_s1(clk, reset, w4, s1);
flopr ff_s0(clk, reset, w8, s0);

or(w9, s1, s0);
and(la, w9, ~s2);
and(lb, s1, ~s2);
and(lc, s0, s1, ~s2);
and(ra, w9, s2);
and(rb, s1, s2);
and(rc, s0, s1, s2);
endmodule

module flopr(
    input  logic clk,
    input  logic reset,
    input  logic d,
    output logic q
);

    always_ff @(posedge clk) begin
        if (reset)
            q <= 0;
        else
            q <= d;
    end

endmodule
