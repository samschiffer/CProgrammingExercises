#include <stdio.h>

int main(void) {
  float loan_amount, interest_rate, monthly_payment, num_of_payments;
  printf("Enter amount of loan: ");
  scanf("%f", &loan_amount);
  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);
  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);
  printf("Enter number of payments: ");
  scanf("%f", &num_of_payments);

  for(int i = 1; i <= num_of_payments; i++){
    loan_amount = loan_amount * (1 + interest_rate / 1200) - monthly_payment;
    printf("Balance remaining after payment %d: $%.2f\n", i, loan_amount);
  }

  return 0;
}
