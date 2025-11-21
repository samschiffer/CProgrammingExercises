#include <stdio.h>

#define percent_tax 5.0f

int main (void) {
  float amount, amount_with_tax;
  printf("Enter an amount: ");
  scanf("%f", &amount);
  amount_with_tax = amount * (1.0f + percent_tax / 100.0f);
  printf("With tax added: $%.2f\n", amount_with_tax);
  return 0;
}
