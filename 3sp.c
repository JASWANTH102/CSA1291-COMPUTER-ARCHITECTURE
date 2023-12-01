#include <stdio.h>

// Define the instruction set
typedef enum {
    ADD,
    SUB,
    MUL,
    HALT
} Instruction;

int main() {
    // Simulate a simple program
    Instruction program[] = {ADD, SUB, MUL, HALT};

    for (int i = 0; i < sizeof(program) / sizeof(program[0]); ++i) {
        // Stage 1: Instruction Fetch (IF)
        printf("IF: Fetching instruction %d\n", i);

        // Stage 2: Instruction Decode (ID)
        printf("ID: Decoding instruction %d\n", i);

        // Stage 3: Execute (EX)
        printf("EX: Executing instruction %d\n", i);

        printf("Cycle %d completed\n", i + 1);
    }

    return 0;
}

