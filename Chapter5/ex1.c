#include <stdio.h>

int main(void) {
  int i, j, k;
  i = 2;
  j = 3;
  k = i * j == 6;
  printf("Answer A: %d\n", k); // 1
  i = 5;
  j = 10;
  k = 1;
  printf("Answer B: %d\n", k > i < j); // 1
  i = 3;
  j = 2;
  k = 1;
  printf("Answer C: %d\n", i < j == j < k); // 1
  i = 3;
  j = 4;
  k = 5;
  printf("Answer D: %d\n", i % j + i < k); // 0
  return 0;
}
