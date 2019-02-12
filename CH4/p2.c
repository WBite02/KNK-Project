#include "stdio.h"

int main()
{
  int numbers;
  int a,b,c;
  scanf("%d", &numbers);
  if (numbers/100 == 0)
    printf("%d\n", (numbers%10*10)+(numbers/10));
  else
  {
    a = numbers/100;
    b = (numbers-(a*100))/10;
    c = (numbers-(a*100))%10;
    printf("%d\n", c*100+b*10+a);
  }

}
