


// 미완성


#include <stdio.h>
#include <math.h>
#include <string.h>

#define N 8
void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);


int main(void)
{
  int hours, min;
  int de_time[N], arr_time[N];
  char SunandMoon[N];
  int desired_time;
  char s2 = 'am';
  int results;

  for(int i = 0; i<N; i++)
  {
    // first, insert a timetable
    // second, compute the time and insert a numbers
    // departure time insert a data
    printf("%d번째 출발시간 \n : ", i+1);
    scanf("%d:%d %c", &hours, &min, &SunandMoon[i]);
    results = strcmp(SunandMoon[i],s2);
    if(results==0)
      de_time[i] = hours*60 + min;
    else
      de_time[i] = (hours+12)*60 + min;

    // arrive time insert a data
    printf("%d번째 도착시간 \n : ", i+1);
    scanf("%d:%d %c", &hours, &min, &SunandMoon[i]);

    if(strcmp(SunandMoon[i],s2)==0 )
      arr_time[i] = hours*60 + min;
    else
      arr_time[i] = (hours+12)*60 + min;
  }
  //compare some data


  //Wanted_Time insert a data
  printf("원하는 시간을 입력해주세요. : ");
  scanf("%d:%d", &hours, &min);
  desired_time = hours*60 + min;

  int compute_num[];
  int min_numbers = 0;
  int a_hours, a_min;
  //find closest_flight

  find_closest_flight(desired_time, &de_time , &arr_time);


  printf("Closest Time : %d : %d", hours, min);
  printf("Arrival Time : %d : %d", a_hours, a_min);
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
  //절대값으로 가까운숫자 찾기~~
  for(int i = 0 ; i < N ; i++)
    compute_num[i] = abs(desired_time - *departure_time);
    if (compute_num[i] < min_numbers)
      min_numbers = compute_num[i];
      *arrival_time = arr_time[i];

  //찾은 숫자 계산해서 시,분으로 나눠서 보여주기~
  //출발한 시간 계산하기~
  *departure_time = min_numbers;
  hours = *departure_time/60;
  min = *departure_time%60;
  //도착한 시간 계산하기~~
  a_hours = *arrival_time/60;
  a_min = *arrival_time%60;

}
