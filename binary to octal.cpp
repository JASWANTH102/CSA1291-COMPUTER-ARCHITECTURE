#include <stdio.h>
#include <string.h>
char binaryTripletToOctal(char* binaryTriplet) {
    int decimalValue = 0;
    for (int i = 0; i < 3; ++i) {
        decimalValue = decimalValue * 2 + (binaryTriplet[i] - '0');
    }
    return (char)(decimalValue + '0');
}
void binaryToOctal(char* binaryNumber) {
    int length = strlen(binaryNumber);
    int padding = (3 - length % 3) % 3;
    char paddedBinary[100];
    strcpy(paddedBinary, binaryNumber);
    for (int i = 0; i < padding; ++i) {
        strcat(paddedBinary, "0");
    }
    int start = 0;
    int end = 3;
    printf("Octal equivalent: ");
    while (start < length + padding) {
        char binaryTriplet[4];
        strncpy(binaryTriplet, paddedBinary + start, 3);
        binaryTriplet[3] = '\0';

        char octalDigit = binaryTripletToOctal(binaryTriplet);
        printf("%c", octalDigit);

        start += 3;
    }

    printf("\n");
}

int main() {
    char binaryNumber[100];
    printf("Enter a binary number: ");
    scanf("%s", binaryNumber);
    binaryToOctal(binaryNumber);

    return 0;
}

