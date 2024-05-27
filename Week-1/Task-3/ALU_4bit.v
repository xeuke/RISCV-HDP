module ALU_4bit (
    input [3:0] A,      // 4-bit input A
    input [3:0] B,      // 4-bit input B
    input [2:0] op,     // 3-bit operation selector
    output reg [3:0] result // 4-bit output result
);

    // Define operation codes
    localparam ADD  = 3'b000;
    localparam SUB  = 3'b001;
    localparam AND  = 3'b010;
    localparam OR   = 3'b011;
    localparam XOR  = 3'b100;
    localparam NOT  = 3'b101;
    localparam NAND = 3'b110;
    localparam NOR  = 3'b111;

    always @(*) begin
        case (op)
            ADD:  result = A + B;
            SUB:  result = A - B;
            AND:  result = A & B;
            OR:   result = A | B;
            XOR:  result = A ^ B;
            NOT:  result = ~A;  // Only A is used for NOT
            NAND: result = ~(A & B);
            NOR:  result = ~(A | B);
            default: result = 4'b0000; // Default case to handle undefined operations
        endcase
    end

endmodule
