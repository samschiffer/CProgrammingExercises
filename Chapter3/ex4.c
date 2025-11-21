#include <stdio.h>

int main(void) {
  int i, j;
  float x;
  printf("Input numbers: ");
  scanf("%d%f%d", &i, &x, &j);
  printf("i: %d, x: %f, j: %d", i, x, j);
  return 0;
}
