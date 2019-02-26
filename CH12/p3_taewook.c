

#include <stdio.h>

#define MSG_LEN 80     /* maximum length of message */

int main(void)
{
  char msg[MSG_LEN], *p;
//array 주소를 지우고 pointer 변수로만 계산해라 라는 의미

  printf("Enter a message: ");
  for (p = msg; p < msg + MSG_LEN; p++) {
    *p = getchar();
    if (*p == '\n')
      break;
  }

  printf("Reversal is: ");
  for (p--; p >= msg; p--)
    putchar(*p);
  putchar('\n');

  return 0;
}
