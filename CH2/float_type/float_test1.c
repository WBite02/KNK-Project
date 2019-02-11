#include <stdio.h>

int main (){
	float num = 0.1;
	float sum = 0;
	int i;

	for(i = 0; i < 30; i++){

		printf("%f\n",sum);

		sum = sum+num;
		
	}

	return 0;
}