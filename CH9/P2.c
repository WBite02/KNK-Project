#include <stdio.h>

int main(){

  float Income_Mon;
  printf("여기에 이번달 수입을 입력해주세요.\n");
  scanf("%f", &Income_Mon);

  float first_Income, second_Income, third_income, forth_income, fifth_income, sixth_income;
  float amount_Tax;

  if (Income_Mon <= 750){
    first_Income = Income_Mon;
    amount_Tax = first_Income * 0.01;
    printf("%f\n", amount_Tax);
  }
  else if (Income_Mon>751 && Income_Mon <2250)
  {
    second_Income = Income_Mon;
    amount_Tax = second_Income * 0.02 + 7.50;
    printf("%f\n", amount_Tax);
  }
  else if(2251 < Income_Mon && Income_Mon< 3750)
  {
    third_income = Income_Mon;
    amount_Tax = third_income *0.03 + 37.50;
    printf("%f\n", amount_Tax);
  }
  else if (3750 < Income_Mon && Income_Mon< 5250)
  {
    forth_income = Income_Mon;
    amount_Tax = forth_income * 0.04 + 82.50;
    printf("%f\n", amount_Tax);
  }
  else if (5251 < Income_Mon && Income_Mon< 7000)
  {
    fifth_income = Income_Mon;
    amount_Tax = fifth_income * 0.05 + 142.50;
    printf("%f\n", amount_Tax);
  }
  else
  {
    sixth_income = Income_Mon;
    amount_Tax = sixth_income * 0.06 + 230.00;
    printf("%f\n", amount_Tax);
  }
}
