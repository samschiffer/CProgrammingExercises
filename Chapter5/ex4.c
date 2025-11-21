#include <stdio.h>

int main(void) {
  float i, j;
  printf("Enter i: ");
  scanf("%f", &i);
  printf("Enter j: ");
  scanf("%f", &j);
  // i = 5;
  // j = 3;
  printf("%d\n", (i > j) - (i < j));
  return 0;
}
