#include "stdio.h"

int main()
{
  int numbers;

  scanf("%d", &numbers);
  printf("%d\n", (numbers%10*10)+(numbers/10));
}
