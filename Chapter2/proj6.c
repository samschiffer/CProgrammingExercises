#include <stdio.h>

int main(void) {
  float x;
  printf("Enter value for x: ");
  scanf("%f", &x);
  printf("Answer: %g\n", ((((3 * x + 2) * x - 5 ) * x - 1) * x + 7) * x - 6);
  return 0;
}
