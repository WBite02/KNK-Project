#include <stdio.h>

int main (){

	double loan;
	double yearly_interest_rate, monthly_interest_rate;
	double monthly_payment;
	double after_m1, after_m2, after_m3;

	printf("Enter amount of loan: ");
	scanf("%lf", &loan);
	printf("Enter interest rate: ");
	scanf("%lf", &yearly_interest_rate);
	printf("Enter monthly payment: ");
	scanf("%lf",&monthly_payment);

	monthly_interest_rate = yearly_interest_rate/12;

	after_m1 = (1+monthly_interest_rate/100)*loan - monthly_payment;
	after_m2 = (1+monthly_interest_rate/100)*after_m1 - monthly_payment;
	after_m3 = (1+monthly_interest_rate/100)*after_m2 - monthly_payment;

	printf("Balance remaining after first payment: %.2f\n", after_m1);
	printf("Balance remaining after second payment: %.2f\n", after_m2);
	printf("Balance remaining after third payment: %.2f\n", after_m3);

	return 0;
}