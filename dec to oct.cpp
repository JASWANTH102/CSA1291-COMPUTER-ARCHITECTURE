#include <stdio.h>
int main() {
    int decimalNumber;
    int octalNumber[100];
    int i = 0;
    printf("Enter a decimal number: ");
    scanf("%d",&decimalNumber);
    while (decimalNumber != 0) {
        octalNumber[i] = decimalNumber % 8;
        decimalNumber /= 8;
        i++;
    }
    printf("Octal equivalent: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", octalNumber[j]);
    }
    printf("\n");
    return 0;
}

