#include <stdio.h> 

int main(void){
  float income;
  printf("Input total income: ");
  scanf("%f", &income);
  printf("Tax due: ");
  if (income < 750) {
    printf("%.2f\n", income * .01);
  } else if (income <= 2250) {
    printf("%.2f\n", 7.50 + (income - 750) * .02);
  } else if (income <= 3750) {
    printf("%.2f\n", 37.50 + (income - 2250) * .03);
  } else if (income <= 5250) {
    printf("%.2f\n", 82.50 + (income - 3750) * .04);
  } else if (income <= 7000) {
    printf("%.2f\n", 142.50 + (income - 5250) * .05);
  } else {
    printf("%.2f\n", 230.00 + (income - 7000) * .06);
  }
  return 0;
}
