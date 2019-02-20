#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 10
#define MAX_VALUE 'Z'
#define DIRECTION	4
#define FALSE	0
#define TRUE	1
#define UP		0
#define DOWN	1
#define LEFT	2
#define	RIGHT	3
#define ERROR	-1
#define EMPTY	'*'
#if 1
#define LOG		FALSE
#else
#define LOG		TRUE
#endif
#define PRINT(args...) \
		do { if (LOG) \
			printf(args); } while(0)


int isAble(char arr[][MAX], int x, int y, int direction){
	int ret = FALSE;
	if(arr[x][y] + 1 > MAX_VALUE)
		return ret;
	switch(direction){
		case UP:
			if(y == 0) {
				ret = FALSE;
			}
			else if(arr[x][y-1] != EMPTY) {
				ret = FALSE;
			}
			else {
				ret = TRUE;
			}
			break;
		case DOWN:
			if(y == MAX - 1) {
				ret = FALSE;
			}
			else if(arr[x][y+1] != EMPTY) {
				ret = FALSE;
			}
			else {
				ret = TRUE;
			}
			break;
		case LEFT:
			if(x == 0) {
				ret = FALSE;
			}
			else if(arr[x-1][y] != EMPTY) {
				ret = FALSE;
			}
			else {
				ret = TRUE;
			}
			break;
		case RIGHT:
			if(x == MAX - 1) {
				ret = FALSE;
			}
			else if(arr[x+1][y] != EMPTY) {
				ret = FALSE;
			}
			else {
				ret = TRUE;
			}
			break;
		default:
			PRINT("%s:%d, current point : (%d,%d), error", __FUNCTION__, __LINE__, x, y);
			break;
	}
	return ret;
}
int getRandomDirection(){
	int random = rand() % DIRECTION;
	return random;
}
int goRandomDirection(char arr[][MAX], int x, int y, char value){
	int dir[DIRECTION] = {0,};
	int randomDirection;
	int i;
	char cValue = value;
	int bufX = x, bufY = y;
	int isNeedMore = 0;
	while(1){
		if(!isNeedMore){
			arr[bufX][bufY] = cValue;
			PRINT("arr[%d][%d] : %c\n", bufX, bufY, arr[bufX][bufY]);
			cValue++;
		}
		randomDirection = getRandomDirection();
		if(isAble(arr, bufX, bufY, randomDirection)){
			switch(randomDirection){
				case UP:
					bufY--;
					break;
				case DOWN:
					bufY++;
					break;
				case LEFT:
					bufX--;
					break;
				case RIGHT:
					bufX++;
					break;
				default:
					exit(1);
					break;
			}
			isNeedMore = 0;
			for(i = 0; i < DIRECTION; i++) dir[i] = 0;//clean
		}
		else{
			isNeedMore = 1;
			dir[randomDirection] = 1;
			int count = 0;
			for(i = 0; i < DIRECTION; i++){
				if(dir[i] == 1){ 
					count++;
				}
			}
			if(count == DIRECTION){
				PRINT("end\n");
				for(i = 0; i < DIRECTION; i++){
					PRINT("count : %d, dir[%d] : %d\n", count, i, dir[i]);
				}
				break;
			}
			if(cValue > MAX_VALUE){
				PRINT("end\n");
				break;
			}
		}
	}
}

void initArray(char arr[][MAX], int maxX, int maxY){
	int i, j;
	for(i = 0; i < maxX; i++){
		for(j = 0; j < maxY; j++){
			arr[i][j] = EMPTY;
		}
	}
}
	
void printArray(char arr[][MAX], int maxX, int maxY){
	int i, j;
	for(i = 0; i < maxX; i++){
		for(j = 0; j < maxY; j++){
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int arr[MAX][MAX] = {0,};
	srand((unsigned)time(NULL)); // To Initialize before get random number
	initArray(arr, MAX, MAX);
	goRandomDirection(arr, 0, 0, 'A');
	printArray(arr, MAX, MAX);
	return 0;
}

