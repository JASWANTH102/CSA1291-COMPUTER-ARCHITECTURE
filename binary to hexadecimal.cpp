#include <stdio.h>
#include <string.h>
char binaryNibbleToHex(char* binaryNibble) {
    int decimalValue = 0;
    for (int i = 0; i < 4; ++i) {
        decimalValue = decimalValue * 2 + (binaryNibble[i] - '0');
    }
    if (decimalValue >= 0 && decimalValue <= 9) {
        return (char)(decimalValue + '0');
    } else {
        return (char)(decimalValue - 10 + 'A');
    }
}
void binaryToHex(char* binaryNumber) {
    int length = strlen(binaryNumber);
    int padding = (4 - length % 4) % 4;
    char paddedBinary[100];
    strcpy(paddedBinary, binaryNumber);
    for (int i = 0; i < padding; ++i) {
        strcat(paddedBinary, "0");
    }
    int start = 0;
    int end = 4;
    printf("Hexadecimal equivalent: ");
    while (start < length + padding) {
        char binaryNibble[5]; 
        strncpy(binaryNibble, paddedBinary + start, 4);
        binaryNibble[4] = '\0';

        char hexDigit = binaryNibbleToHex(binaryNibble);
        printf("%c", hexDigit);

        start += 4;
    }

    printf("\n");
}

int main() {
    char binaryNumber[100];
    printf("Enter a binary number: ");
    scanf("%s", binaryNumber);
    binaryToHex(binaryNumber);

    return 0;
}

