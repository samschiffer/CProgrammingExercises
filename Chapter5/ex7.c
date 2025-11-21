#include <stdio.h>

int main(void) {
  int i;
  printf("Enter i: ");
  scanf("%d", &i);
  printf("%d\n", i >= 0 ? i : -i);
  return 0;
}
