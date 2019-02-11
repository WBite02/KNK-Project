#include <stdio.h>

int main (){

	float r;
	float V;

	printf("Enter radius of a circle: ");
	scanf("%f",&r);

	V = 4.0f/3.0f*3.14*r*r*r;

	printf("The volume of a sphere with radius %fm is %fm3.\n", r, V);

	return 0;
}