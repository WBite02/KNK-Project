#include <stdio.h>
int main (){
	int array[5][5];
	int row_sum[5] = {0}, col_sum[5] = {0};
	int high_score[5], low_score[5];
	int i, j=0;
	int total[5];
	double average[5];

	for(i = 0; i < 5; i ++){
		printf("Student %d: ",i+1);
		for(j = 0; j<5; j++){
			scanf("%d", &array[i][j]);
		}
	}

	for(i = 0; i<5; i++){
		high_score[i] = array[0][0];
		low_score[i] = array[0][0];
		for(j = 0; j < 5; j++){
			row_sum[i] += array[i][j];
			col_sum[i] += array[j][i];
			if(high_score[i] < array[j][i])
				high_score[i] = array[j][i];
			if(low_score[i] > array[j][i])
				low_score[i] = array[j][i];
		}
		total[i] = row_sum[i];
		average[i] = row_sum[i]/5.0;
	}


	printf("\t\tSummary	by Student\t\t\n");
	printf("===============================================\n");
	printf("\t\tTotal score\t\tAverage\n");
	for(i = 0; i <5; i++){
		printf("Student %d %15d %20.2f\n", i+1, total[i], average[i]);
	}

	printf("\t\tSummary	by Quiz\t\t\n");
	printf("================================================\n");
	printf("\t\tQuiz 1\tQuiz 2\tQuiz 3\tQuiz 4\tQuiz 5\n");
	printf("Lowest score:\t");
	for(i = 0; i<5; i++)
		printf("%5d\t", low_score[i]);
	printf("\n");
	printf("Highest score:\t");
	for(i = 0; i<5; i++)
		printf("%5d\t", high_score[i]);
	printf("\n");
	return 0;
		
}