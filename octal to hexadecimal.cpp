#include <stdio.h>
#include <math.h>
int octalToDecimal(int octalNumber) {
    int decimalNumber = 0, i = 0;
    while (octalNumber != 0) {
        decimalNumber += (octalNumber % 10) * pow(8, i);
        ++i;
        octalNumber /= 10;
    }

    return decimalNumber;
}
void decToHex(int decimalNumber) {
    char hexNumber[100];
    int index = 0;
    while (decimalNumber > 0) {
        int remainder = decimalNumber % 16;
        if (remainder < 10) {
            hexNumber[index] = remainder + '0';
        } else {
            hexNumber[index] = remainder - 10 + 'A';
        }
        index++;
        decimalNumber = decimalNumber / 16;
    }
    printf("Hexadecimal equivalent: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", hexNumber[i]);
    }

    printf("\n");
}

int main() {
    int octalNumber;
    printf("Enter an octal number: ");
    scanf("%d", &octalNumber);
    int decimalNumber = octalToDecimal(octalNumber);
    decToHex(decimalNumber);

    return 0;
}

