#include <stdio.h>
int main(){
	long long binaryNumber;
	int decimalNumber=0,base=1,remainder;
	printf("Enter a binary number:");
	scanf("%11d",&binaryNumber);
	while (binaryNumber !=0){
		remainder=binaryNumber % 10;
		decimalNumber += remainder*base;
		base*=2;
		binaryNumber /=10;
	}
	printf("Decimal equivalent: %d\n",decimalNumber);
	return 0;
}
