#include <stdio.h>
#include <string.h>
#include <math.h>
int hexDigitToDecimal(char hexDigit) {
    if (hexDigit >= '0' && hexDigit <= '9') {
        return hexDigit - '0';
    } else if (hexDigit >= 'A' && hexDigit <= 'F') {
        return hexDigit - 'A' + 10;
    } else if (hexDigit >= 'a' && hexDigit <= 'f') {
        return hexDigit - 'a' + 10;
    } else {
        return -1;
    }
}
int hexToDecimal(const char* hexNumber) {
    int length = strlen(hexNumber);
    int decimalNumber = 0;
    for (int i = 0; i < length; ++i) {
        int digitValue = hexDigitToDecimal(hexNumber[i]);
        if (digitValue == -1) {
            printf("Invalid hexadecimal digit '%c'\n", hexNumber[i]);
            return -1; 
        }
        decimalNumber = decimalNumber * 16 + digitValue;
    }

    return decimalNumber;
}

int main() {
    char hexNumber[100];
    printf("Enter a hexadecimal number: ");
    scanf("%s", hexNumber);
    int decimalNumber = hexToDecimal(hexNumber);

    if (decimalNumber != -1) {
        printf("Decimal equivalent: %d\n", decimalNumber);
    }

    return 0;
}

