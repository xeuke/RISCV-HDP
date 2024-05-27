`timescale 1ns / 1ps

module ALU_4bit_tb;

    reg [3:0] A;       // 4-bit input A
    reg [3:0] B;       // 4-bit input B
    reg [2:0] op;      // 3-bit operation selector
    wire [3:0] result; // 4-bit output result

    // Instantiate the ALU
    ALU_4bit uut (
        .A(A),
        .B(B),
        .op(op),
        .result(result)
    );

    initial begin
        // Create a VCD file for GTKwave
        $dumpfile("ALU_4bit_tb.vcd");
        $dumpvars(0, ALU_4bit_tb);

        // Test cases
        A = 4'b1010; B = 4'b0101; op = 3'b000; #10; // ADD
        A = 4'b1010; B = 4'b0101; op = 3'b001; #10; // SUB
        A = 4'b1010; B = 4'b0101; op = 3'b010; #10; // AND
        A = 4'b1010; B = 4'b0101; op = 3'b011; #10; // OR
        A = 4'b1010; B = 4'b0101; op = 3'b100; #10; // XOR
        A = 4'b1010; op = 3'b101; #10;             // NOT
        A = 4'b1010; B = 4'b0101; op = 3'b110; #10; // NAND
        A = 4'b1010; B = 4'b0101; op = 3'b111; #10; // NOR

        $finish;
    end

endmodule
