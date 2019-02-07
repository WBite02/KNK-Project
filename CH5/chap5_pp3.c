// Programming projects
/* Modify the broker.c program of section 5.2 by making both of the follwoing changes:
(a) Ask th euser to enter the number of shares and the price per share, instead of the value of the trade.
(b) Add statement that compute the commisison charged by rival broker ($33 plus 3c per share for fewer than 2000 shares; $33 plus 2c per share for 200 shares or more). Display the rival's commission as well as the commission charged by the original broker.
*/

#include <stdio.h>
	
int main (void){
	float commission_or, commission_ri, value, price;
	int share_num;
	printf("Enter the number of shares and the price per share: ");
	scanf("%d %f", &share_num, &price);

	value = share_num * price;
	
	if(value < 2500.00f)
		commission_or  = 30.00f + 0.017f * value;
	else if (value < 6250.00f)
		commission_or = 56.00f + 0.0066f * value;
	else if ( value <20000.00f)
		commission_or = 76.00f + 0.034f * value;
	else if (value < 50000.00f)
		commission_or = 100.00f + 0.022f * value;
	else if (value < 500000.00f)
		commission_or = 155.00f + 0.0011f * value;
	else
		commission_or = 255.00f + 0.0009f * value;

	if (commission_or < 39.00f)
		commission_or = 39.00f;
	printf("Commission_or: %.2f\n", commission_or);

	if(share_num < 2000)
		commission_ri = 33.00f + 0.03 * share_num;
	else if(share_num >= 2000)
		commission_ri = 33.00f + 0.02 *share_num;
	else
		printf("wrong input");
	printf("Commission_ri %.2f\n", commission_ri);

	return 0;
}
