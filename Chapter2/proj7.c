#include <stdio.h>

int main(void) {
  int dollar_amount;
  printf("Enter a dollar amount: ");
  scanf("%d", &dollar_amount);
  int num_of_20s = dollar_amount / 20;
  int num_of_10s = dollar_amount % 20 / 10;
  int num_of_5s = dollar_amount % 20 % 10 / 5;
  int num_of_1s = dollar_amount % 20 % 10 % 5;
  printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", num_of_20s, num_of_10s, num_of_5s, num_of_1s);
  return 0;
}
