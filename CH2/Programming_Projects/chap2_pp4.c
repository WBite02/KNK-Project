#include <stdio.h>

int main(){
	
	float amount, with_tax;

	printf("Enter an amount: ");
	scanf("%f", &amount);

	with_tax = 1.05 * amount;

	printf("With tax added: %.2f\n", with_tax);

	return 0;
}