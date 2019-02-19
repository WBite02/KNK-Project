#include <stdio.h>

int chageToMinutes(int hour, int minute){
	return hour*12+minute;
}

int distanceBetweenTime(int minutes1, int minutes2){
	return minutes1>minutes2?minutes1-minutes2:minutes2-minutes1;
}



int * chage12to24(int * time_12){

	int time_24 [2];

	int i;

	for(i = 0; i < 8; i++){
		if(time_12[2] == 0 && time_12[1] != 12){
			time_24[0] = time_12[0];
			time_24[1] = time_12[1];
		} 
		else if (time_12[3] == 0 && time_12 = 12){
			time_24[0] = 0;
			time_24[1] = departure_12[i][1];
		}
		else if (time_12[3] == 1 && time_12 = 12){
			time_24[0] = time_12[0];
			time_24[1] = time_12[1];
		}
		else if (time_12[3] == 1 && time_12[1] != 12){
			time_24[0] = time_12[0] + 12;
			time_24[1] = time_12[1];
		}
	}
	return time_24;
}


int main (){
	const int departure[8][3] = {{8,0,0},{9,43,0},{11,19,0},{12,47,1},{2,0,1},{3,45,1},{7,0,1},{9,45,1}};
	const int arrival[8][3 = {{10,16,0},{11,52,0},{1,31,0},{3,0,1},{4,8,1},{5,55,1},{9,20,1},{11,58,1}}; 

	return 0;
}
