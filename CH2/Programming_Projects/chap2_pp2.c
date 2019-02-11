#include <stdio.h>

int main (){

	int r = 10;
	float V;

	V = 4.0f/3.0f*3.14*r*r*r;

	printf("The volume of a sphere with raduis %dm is %fm3.\n", r, V);

	return 0;
}