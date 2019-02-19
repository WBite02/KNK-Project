#include <stdio.h>

int main (){
	int decimal;
	int octal;
	int digit1, digit2, digit3, digit4, digit5;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d",&decimal);

	digit1 = decimal%8;
	digit2 = (decimal/8)%8;
	digit3 = (decimal/(8*8))%8;
	digit4 = (decimal/(8*8*8))%8;
	digit5 = (decimal/(8*8*8*8))%8;

	printf("In octal, your number is: %d%d%d%d%d\n", digit5,digit4,digit3,digit2,digit1);

	return 0;
}