#include <stdio.h>

int main(void) {
  int i, j, k;
  i = 10;
  j = 5;
  printf("Answer A: %d\n", !i < j); // 1
  i = 2;
  j = 1;
  printf("Answer B: %d\n", !!i + !j); // 1 
  i = 5;
  j = 0;
  k = -5;
  printf("Answer C: %d\n", i && j || k); // 1 
  i = 1;
  j = 2;
  k = 3;
  printf("Answer D: %d\n", i < j || k); // 1
  return 0;
}
