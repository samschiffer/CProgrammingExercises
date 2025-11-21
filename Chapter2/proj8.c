#include <stdio.h>

int main(void) {
  float loan_amount, interest_rate, monthly_payment;
  printf("Enter amount of loan: ");
  scanf("%f", &loan_amount);
  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);
  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);

  // First payment
  loan_amount = loan_amount * (1 + interest_rate / 1200) - monthly_payment;
  printf("Balance remaining after first payment: $%.2f\n", loan_amount);
  loan_amount = loan_amount * (1 + interest_rate / 1200) - monthly_payment;
  printf("Balance remaining after second payment: $%.2f\n", loan_amount);
  loan_amount = loan_amount * (1 + interest_rate / 1200) - monthly_payment;
  printf("Balance remaining after third payment: $%.2f\n", loan_amount);

  return 0;
}
