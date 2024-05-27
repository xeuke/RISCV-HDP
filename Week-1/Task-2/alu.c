#include <stdio.h>
#include <stdint.h>

// Define operations
#define ADD 0
#define SUB 1
#define AND 2
#define OR  3
#define XOR 4
#define NOT 5
#define NAND 6
#define NOR 7

// ALU Functions for operation
uint8_t alu_4bit(uint8_t A, uint8_t B, uint8_t op) {
    uint8_t result = 0;
    
    switch(op) {
        case ADD:
            result = A + B;
            break;
        case SUB:
            result = A - B;
            break;
        case AND:
            result = A & B;
            break;
        case OR:
            result = A | B;
            break;
        case XOR:
            result = A ^ B;
            break;
        case NOT:
            result = ~A;  
            break;
        case NAND:
            result = ~(A & B);
            break;
        case NOR:
            result = ~(A | B);
            break;
        default:
            printf("Invalid operation\n");
            break;
    }
 
    return result & 0xF;
}

void print_binary(uint8_t num) {
    for(int i = 3; i >= 0; i--) {
        printf("%u", (num >> i) & 1);
    }
}

int main() {
    uint8_t A, B, op;

    // Define Inputs here
    A = 0b1010;  // 10 in decimal
    B = 0b0101;  // 5 in decimal

    // Perform all operations on A and B operands (B is not used in NOT/#5 operation)
    for(op = 0; op <= 7; op++) { 
        uint8_t result = alu_4bit(A, B, op);
        printf("Operation %u: ", op);
        print_binary(result);
        printf(" (Decimal: %u)\n", result);
    }

    return 0;
}
