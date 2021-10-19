/**
 * Write a program that asks the user to enter a dollars-and-cents amount,
 * then displays the amount with 5% tax added
 */

#include <stdio.h>
#define TAX_RATE 5.0f / 100.0f

int main(void)
{

  float amount;

  printf("Enter an amount: ");
  scanf("%f", &amount);
  printf("With tax added: $%.2f\n", amount + (amount * TAX_RATE));

  return 0;
}