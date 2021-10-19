/**
 * Write a program that calculates the remaining balance on a loan after the first,
 * second, and third monthly payments
 */

#include <stdio.h>

int main(void)
{
  float loan, rate, monthlyPayment;

  printf("Enter amount of loan: ");
  scanf("%f", &loan);

  printf("Enter interest rate: ");
  scanf("%f", &rate);

  printf("Enter monthly payment: ");
  scanf("%f", &monthlyPayment);

  rate = (rate / 100) / 12;

  loan = loan - monthlyPayment + (loan * rate);
  printf("Balance remaining after first payment: $%.2f\n", loan);
  loan = loan - monthlyPayment + (loan * rate);
  printf("Balance remaining after second payment: $%.2f\n", loan);
  loan = loan - monthlyPayment + (loan * rate);
  printf("Balance remaining after third payment: $%.2f\n", loan);

  return 0;
}