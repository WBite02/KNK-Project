

#include <stdio.h>

int main()
{
  char string_c[90];
  printf("Enter a message : ");
  int i;
  for(i = 0; i < 90; i ++)
  {
    string_c[i] = getchar();
    if (string_c[i] == '\n')
      break;
  }

  printf("Reversal is :");
  //이것의 의미가 뭘까.
  for (i--; i>=0; i--)
    putchar(string_c[i]);
  putchar('\n');

  return 0;

}
