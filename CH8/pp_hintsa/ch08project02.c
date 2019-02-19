#include <stdio.h>
#include <stdbool.h>

int main(){
	int digit_seen[10] = {false};
	int digit;
	long n;
	int i;

	printf("Enter a number: ");
	scanf("%ld", &n);

	printf("Digit:\t\t");
	for(i = 0; i < 10; i++){
		printf("%3d",i);
	}

	while (n>0){
		digit = n%10;
		if(digit_seen[digit])
			digit_seen[digit]++;
		else
			digit_seen[digit] = 1;
		n/=10;
	}
	printf("\nOccurences:\t");

	for(i = 0; i<10; i++){
		printf("%3d", digit_seen[i]);
	}
	printf("\n");


	return 0;
}