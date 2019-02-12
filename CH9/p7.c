#include "stdio.h"

int power(int x, int n)
{
  int a = x;
  int b = x*x;
  int c = n;
  if (n ==2)
    return b;
  else if (n==1)
    return a;
  else if (n==0)
    return 1;
  else if (n>1&& n%2==0)
    return b*power(x,n-2);
  else
  {
    c = n-1;
    return a*power(x,c/2)*power(x,c/2);
  }

}
int main()
{
  printf("%d\n", power(2,9));
}
