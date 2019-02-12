#include <stdio.h>

int main (){
	int item_number;
	double unit_price;
	int purchase_day, purchase_month, purchase_year;

	printf("Enter item number: ");
	scanf("%d", &item_number);
	printf("Enter unit price: ");
	scanf("%lf", &unit_price);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &purchase_month, &purchase_day, & purchase_year);

	printf("Item\tUnit\t\tPurchase\n");
	printf("\tPrice\t\tDate\n");
	printf("%d\t$%-6.2f\t\t%d/%d/%d\n",item_number,unit_price,purchase_month, purchase_day, purchase_year);


	return 0;

}