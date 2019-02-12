#include <stdio.h>

int main (){
	int area_code;
	int number1, number2;

	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &area_code, &number1, &number2);
	printf("You entered %03d.%03d.%04d\n",area_code,number1,number2);

	return 0;
}