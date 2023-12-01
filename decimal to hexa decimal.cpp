#include <stdio.h>

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
    int decimalNumber;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    decToHex(decimalNumber);
    return 0;
}

