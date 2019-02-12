#include <stdio.h>
int main()
{
  int Max_Number;
  int array [6]= {1,5,14,2,6,9};

  printf("%d\n", array[5]);
  for (int i = 0; i < 5; ++i)
  {
    for(int j = i+1; j< 6; ++j)
    {
      if(array[i]<array[j])
      {
        Max_Number = j;
        break;
      }
    }
    int temp = array[Max_Number];
    array[Max_Number] = array[5];
    array[5] = temp;
    printf("%d\n", array[5]);
  }

  return 0;
}
