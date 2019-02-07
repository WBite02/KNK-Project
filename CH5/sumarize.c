
#include <stdio.h>

int main()
{
  int i = +1;
  int j = -5;

  int result = i +j * 3;

  //증감

  for(int a = 0; a< 5; ++a)
  {
    printf("%d\n", a);
  }

  for(int b = 0; b < 5; b++)
  {
    printf("%d\n", b);
  }

  int numbers = ++i + j++;
  printf("%d\n", numbers);
  return 0;
}
