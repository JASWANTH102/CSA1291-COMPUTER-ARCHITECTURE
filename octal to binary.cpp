#include <stdio.h>
void octalDigitToBinary(int octalDigit) {
    int binary[3];
    for (int i = 2; i >= 0; i--) {
        binary[i] = octalDigit % 2;
        octalDigit /= 2;
    }
    for (int i = 0; i < 3; i++) {
        printf("%d", binary[i]);
    }
}
void octalToBinary(int octalNumber) {
    while (octalNumber != 0) {
        int octalDigit = octalNumber % 10;
        octalDigitToBinary(octalDigit);
        octalNumber /= 10;
    }

    printf("\n");
}

int main() {
    int octalNumber;
    printf("Enter an octal number: ");
    scanf("%d", &octalNumber);
    printf("Binary equivalent: ");
    octalToBinary(octalNumber);

    return 0;
}

