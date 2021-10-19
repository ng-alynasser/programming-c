/**
 * Write a program that asks the user to enter a U.S dollar amount and then shows
 * how to pay that amount using the smallest number of $20, $10, $5, and $1 bills
 */

#include <stdio.h>

int main(void)
{
  int amount, leftAmount;

  printf("Enter a dollar amount: ");
  scanf("%d", &amount);

  printf("$20 bills: %d\n", (amount / 20));
  leftAmount = amount - ((amount / 20) * 20);

  printf("10$ bills: %d\n", (leftAmount / 10));
  leftAmount = leftAmount - ((leftAmount / 10) * 10);

  printf("5$ bills: %d\n", (leftAmount / 5));
  leftAmount = leftAmount - ((leftAmount / 5) * 5);

  printf("1$ bills: %d\n", leftAmount);

  return 0;
}