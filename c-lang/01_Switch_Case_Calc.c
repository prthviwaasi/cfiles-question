#include<stdio.h>

int main(){
  char operator;
  double num1;
  double num2;
  double result;

  printf("\nChoose A Operator (+ - * /): ");
  scanf(" %c", &operator);

  printf("Enter Number1: ");
  scanf("%lf", num1);

  printf("Enter Number2: ");
  scanf("%lf", num2);

  switch (operator)
  {
  case '+':
    result = num1 + num2;
    printf("\nresult: %.2lf",result);
    break;
  case '-':
    result = num1 - num2;
    printf("\nresult: %.2lf",result);
    break;
  case '*':
    result = num1 * num2;
    printf("\nresult: %.2lf",result);
    break;
  case '/':
    result = num1 / num2;
    printf("\nresult: %.2lf",result);
    break;
  default:
    printf("%c is not a valid number..!", operator);
    break;
  }
  return 0;
}