#include <stdio.h>
int main (){
	int array[5][5];
	int row_sum[5] = {0}, col_sum[5] = {0};
	int i, j;

	for(i = 0; i < 5; i ++){
		printf("Enter row %d: ",i+1);
		for(j = 0; j<5; j++){
			scanf("%d", &array[i][j]);
		}
	}

	for(i = 0; i<5; i++){
		for(j = 0; j < 5; j++){
			row_sum[i] += array[i][j];
			col_sum[i] += array[j][i];
		}
	}
	printf("Row totals: ");
	for(i = 0; i < 5; i++)
		printf("  %d", row_sum[i]);
	printf("\n");

	printf("Column totals: ");
	for(i = 0; i <5; i++)
		printf("  %d", col_sum[i]);
	printf("\n");

	return 0;
		
}