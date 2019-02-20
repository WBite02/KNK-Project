#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define SIZE 10
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

char randArray[SIZE][SIZE];
bool isLetter[SIZE][SIZE] = {false};
int x = 0, y = 0;
void InitArray (){

	int i, j;
	for(i = 0; i < SIZE; i++){
		for(j = 0; j < SIZE; j++){
			randArray[i][j] = '.';
			//printf("%c",randArray[i][j]);
		}
		//printf("\n");
	}

	return;
}

int checkAllSideLetter (int x, int y){
	bool T_all, B_all, R_all, L_all, C_all;
	if(x == 0 && isLetter[x][y+1] == true && isLetter[x][y-1] == true && isLetter[x+1][y] == true){
		T_all = true;
		//printf("Exited t\n");
	}

	else
		T_all = false;

	if(x == 9 && isLetter[x][y+1] == true && isLetter[x][y-1] == true && isLetter[x-1][y] == true){
		B_all = true;
		//printf("Exited b\n");
	}
	else
		B_all = false;
	if(y == 0 && isLetter[x][y+1] == true && isLetter[x+1][y] == true && isLetter[x-1][y] == true){
		L_all = true;
		//printf("Exited l\n");
	}
	else
		L_all = false;
	if(y == 9 && isLetter[x][y-1] == true && isLetter[x+1][y] == true && isLetter[x-1][y] == true){
		R_all = true;
		//printf("Exited r\n");
	}
	else
		R_all = false;
	if(isLetter[x][y+1] == true && isLetter[x][y-1] == true && isLetter[x+1][y] == true && isLetter[x-1][y] == true){
		C_all = true;
		//printf("Exited c\n");
	}
	else
		C_all = false;
	if(T_all || B_all || R_all || L_all || C_all)
		return 1;
	else
		return 0;

}

int checkGo (int direction){

	switch (direction) {
		case UP:
			//printf("0");
			if (x == 0 || isLetter[x-1][y] != 0)
				return 0;
			else
				return 1;
		case DOWN:
			//printf("1");
			if (x == 9 || isLetter[x+1][y] != 0)
				return 0;
			else
				return 1;		
		case LEFT:
			//printf("2");
			if (y == 0 || isLetter[x][y-1] != 0)
				return 0;
			else
				return 1;
		case RIGHT:
			//printf("3");
			if (y == 9 || isLetter[x][y+1] != 0)
				return 0;
			else
				return 1;
		default:
			printf("INPUT ERROR");
	}
	return 0;
}

void putLetter (){
	int direction;
	int random;
	srand((unsigned) time(NULL));
	randArray[x][y] = 'A';
	isLetter[x][y] = true;
	while (randArray[x][y] < 'A'+25){
		direction = rand ()%4;
		//printf("%c\n",randArray[x][y]);
		//printf("%d\n",direction);
		if(!checkGo(direction))
			continue;
		switch (direction){
			case DOWN:
				randArray[x+1][y] = randArray[x][y]+1;
				isLetter[x+1][y] = true;
				x++;
				break;
			case UP:
				randArray[x-1][y] = randArray[x][y]+1;
				isLetter[x-1][y] = true;
				x--;
				break;
			case LEFT:
				randArray[x][y-1] = randArray[x][y]+1;
				isLetter[x][y-1] = true;
				y--;
				break;
			case RIGHT:
				randArray[x][y+1] = randArray[x][y]+1;
				isLetter[x][y+1] = true;
				y++;
				break;
			default:
				printf("INPUT ERROR");
		}

		if(checkAllSideLetter(x,y))
			break;

	}
	return;
}

void Output (){
	int i, j;
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			printf("%c", randArray[i][j]);
		}
		printf("\n");
	}
	return;
}


int main (){
	InitArray();
	putLetter();
	Output();
	return 0;
}