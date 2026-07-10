module aludecoder (
        input logic [1:0] ALUOp,
    input logic [2:0] funct3,
    input logic op5,
    input logic funct75,
    output logic [2:0] ALUControl
    );

    always_comb begin
        ALUControl[2] = ALUOp[1] & ~funct3[2] & funct3[1];
        ALUControl[1] = ALUOp[1] & funct3[2];
        ALUControl[0] = ALUOp[0] | (ALUOp[1] & ~funct3[0] & (funct3[1] | (op5 & funct75)));
    end

endmodule
