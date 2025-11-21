#include <stdio.h>

int main(void) {
  int number, digits;
  digits = 5;
  printf("Enter a number: ");
  scanf("%d", &number);
  if (number >= -9 && number <= 9) {
    digits = 1;
  } else if ((number >= 10 && number <= 99) || (number >= -99 && number <= -10)) {
    digits = 2;
  } else if ((number >= 100 && number <= 999) || (number >= -999 && number <= -100)) {
    digits = 3;
  } else if ((number >= 1000 && number <= 9999) || (number >= -9999 && number <= -1000)) {
    digits = 4;
  }

  printf("The number %d has %d ", number, digits);
  if (digits <= 1) {
    printf("digit\n");
  } else  {
    printf("digits\n");
  }

  return 0;
}
