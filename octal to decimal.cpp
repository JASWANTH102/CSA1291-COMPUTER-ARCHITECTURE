#include <stdio.h>
int octalToDecimal(int octalNumber) {
    int decimalNumber = 0, i = 0;
    while (octalNumber != 0) {
        int remainder = octalNumber % 10;
        decimalNumber += remainder * pow(8, i);
        ++i;
        octalNumber /= 10;
    }

    return decimalNumber;
}

int main() {
    int octalNumber;
    printf("Enter an octal number: ");
    scanf("%d", &octalNumber);
    int decimalNumber = octalToDecimal(octalNumber);
    printf("Decimal equivalent: %d\n", decimalNumber);

    return 0;
}

