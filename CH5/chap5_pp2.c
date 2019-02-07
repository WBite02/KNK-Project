//Programming projects 
/* 2. Write a program that asks the user for 24-hour time, then dispalys the time in 12-hour form:

		Enter a 24-hour time: 21:11
		Equivalent 12-hour time: 9:11 PM

	Be careful not to display 12:00 as 0:00.
*/
void time_24_to_12 (int hour_24, int minute);
#include <stdio.h>

int main (void){

	int hour_24;
	int minute;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour_24, &minute);

	if (hour_24 == 0)
		printf("Equivalent 12-hour time: %02d:%02d AM\n", 12, minute);
	else if(hour_24 < 11)
		printf("Equivalent 12-hour time: %02d:%02d AM\n", hour_24, minute);
	else if(hour_24 == 12)
		printf("Equivalent 12-hour time: %02d:%02d PM\n", hour_24, minute);
	else
		printf("Equivalent 12-hour time: %02d:%02d PM\n", hour_24-12, minute);

return 0;

}