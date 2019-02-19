#include <stdio.h>
#include <stdbool.h>

int main(){
	bool digit_seen[10] = {false};
	int digit;
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	printf("Repeated digit (s): ");

	while (n>0){
		digit = n%10;
		if(digit_seen[digit])
			printf("%d ", digit);
		digit_seen[digit] = true;
		n/=10;
	}

	if (n<=0)
		printf("None");
	
	printf("\n");

	return 0;
}