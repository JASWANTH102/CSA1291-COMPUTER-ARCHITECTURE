#include <stdio.h>

int main() {
    int decimal, binary = 0, base = 1, rem;
    
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    // convert decimal to binary
    while(decimal > 0) {
        rem = decimal % 2;
        binary += rem * base;
        decimal /= 2;
        base *= 10;
    }
    
    printf("Binary number: %07d", binary); // 7 digits with leading zeros
    
    return 0;
}
