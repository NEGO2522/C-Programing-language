#include <stdio.h>

int main() {
  int num1 , num2 , num3 , subtract; 

  printf("Enter a number 1:- ");
  scanf("%d", &num1);

  printf("Enter a number 2 :- ");
  scanf("%d", &num2);

  printf("Enter a number 3 :- ");
  scanf("%d", &num3);

  subtract = num3-num2-num1;
  printf("%d", subtract);
}