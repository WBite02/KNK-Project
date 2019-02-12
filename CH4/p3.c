#include "stdio.h"

int main()
{
  int numbers;
  printf("Enter a number between 0 and 32767: \n");
  scanf("%d", &numbers);
  printf("%5d\n", numbers%8+numbers/8);
}
