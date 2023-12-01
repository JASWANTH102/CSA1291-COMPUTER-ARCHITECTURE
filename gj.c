#include <stdio.h>
int main()
{
    int decimalNumber, binaryNumber[100], i = 0,j;
    // Input decimal number from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Convert decimal to binary
    while (decimalNumber > 0) {
        binaryNumber[i] = decimalNumber % 2;
        decimalNumber /= 2;
        i++;
    }

    // Display the binary equivalent
    printf("Binary equivalent: ");
    for (j = i - 1; j >= 0; j--){
        printf("%d", binaryNumber[j]);
    }
    printf("\n");
}

