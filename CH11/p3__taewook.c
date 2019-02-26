

// 소인수 분해

#include <stdio.h>


void reduce (int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);
int main()
{
  int numerator, denominator, compute_num1,compute_num2;

  printf("입력 부탁해요~: " );
  scanf("%d/%d", &numerator, &denominator);

  reduce(numerator, denominator, &compute_num1, &compute_num2);

  printf("%d/%d\n", compute_num1, compute_num2);
  return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
  for(int i = 2; i < numerator; i++)
    if(numerator%i == 0 && denominator%i == 0)
    {
      *reduced_numerator = numerator/i;
      *reduced_denominator = denominator/i;
    }
    else if (numerator == 1)
      break;
}
