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

    // Simulate a 3-stage pipeline
    Instruction IF, ID, EX;

    for (int i = 0; i < sizeof(program) / sizeof(program[0]); ++i) {
        // Stage 1: Fetch
        IF = program[i];

        // Stage 2: Decode
        ID = IF;

        // Stage 3: Execute
        EX = ID;

        // Simulate instruction execution
        switch (EX) {
            case ADD:
                printf("Executing ADD instruction\n");
                break;
            case SUB:
                printf("Executing SUB instruction\n");
                break;
            case MUL:
                printf("Executing MUL instruction\n");
                break;
            case HALT:
                printf("Halting the processor\n");
                break;
            default:
                printf("Unknown instruction\n");
        }

        printf("Cycle %d completed\n", i + 1);
    }

    return 0;
}

