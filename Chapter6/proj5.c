#include <stdio.h>

int main(void) {
  int num, dig;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("The reversal is: ");
  while(num > 0) {
    dig = num % 10;
    printf("%d", dig);
    num /= 10;
  }
  printf("\n");
  return 0;
}
