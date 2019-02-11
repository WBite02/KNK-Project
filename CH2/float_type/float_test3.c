#include <stdio.h>

int main(){
	float num = 0;
	float add = 0.1;

	while (num < 10){

		printf("%f\n", num);

		num+=add;

		if(num == 5){

			printf("This is half");

		}

	}

	return 0;
}