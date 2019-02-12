#include <stdio.h>

int main (){

	int amount;
	int twenties, tens, fives, ones;

	printf("Enter a dollar amount: ");

	scanf("%d",&amount);

	twenties = amount/20;
	tens = (amount%20)/10;
	fives = ((amount%20)%10)/5;
	ones = (((amount%20)%10)%5);

	printf("20$ bills: %d\n",twenties);
	printf("10$ bills: %d\n",tens);
	printf(" 5$ bills: %d\n",fives);
	printf(" 1$ bills: %d\n",ones);	

	return 0;
}