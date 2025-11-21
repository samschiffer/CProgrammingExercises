#include <stdio.h>

int main(void) {
  int number;
  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &number);
  printf("Your number in octal is: %d%d%d%d%d\n", number / 4096, number % 4096 / 512, number % 512 / 64, number % 64 / 8, number % 8);
  return 0;
}
