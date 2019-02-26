
#include <stdio.h>
#include <stdbool.h>

int main()
{

  char s1[90], *s, s2[90], *p;
  bool correct[90];
  static int j= 0 ;
  int temp = 0;
  printf("Enter a message : " );

  //입력 받기

  for(s= &s1[0]; s<&s1[90]; s++)
  {
    *s = getchar();
    if(*s == '\n')
      break;
    Length = i;
  }

  //입력이 잘 되었는지 확인하기
  for (i--; i>=0; i--)
  {
    s2[j]= s1[i];
    putchar(s2[j]);
    j++;
  }
  putchar('\n');

  //거꾸로 입력된 것과 원본을 비교해보기
  for(i=0; i<Length+1; i++)
  {
    for (j; j <Length+1; j++)

      if(s1[i] == s2[j])
        correct[i] = true;
      else
      {
        //만약 하나라도 틀리면 회문이 성립되지 않는다.
        printf("Not a palindrome\n");
        break;
      }
  }
  // 마지막 배열까지 true 값이 들어가게되면
  if (i == Length+1)
  {
    printf("palindrome\n");
  }
  return 0;
}
