
#include <stdio.h>


void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
  int dollars, twenties_f, tens_f, fives_f, ones_f;

  printf("Enter the your Money~~ : ");
  scanf("%d",&dollars);

  pay_amount(dollars, &twenties_f, &tens_f, &fives_f, &ones_f);



  return 0;
}
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
  *twenties= dollars/20;
  *tens = (dollars%20)/10;
  *fives = (dollars%10)/5;
  *ones = (dollars%5);
  printf("20$ count :%d\n", *twenties);
  printf("10$ count :%d\n", *tens);
  printf("5$ count :%d\n", *fives);
  printf("나머지 :%d\n", *ones);

}
