#include "stdio.h"

int main()
{
  int i2,i4,i6,i8,i10,i12;
  int j1,j3,j5,j7,j9,j11;
  int first_sum;
  int second_sum, total_sum;
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &j1,&i2, &j3, &i4, &j5, &i6, &j7,&i8,&j9,&i10,&j11,&i12);
  first_sum = (i2+i4+i6+8+i10+i12)*3;
  second_sum = (j1+j3+j5+j7+j9+j11);
  total_sum = first_sum + second_sum-1;
  printf("%d\n", total_sum/10 );
}
