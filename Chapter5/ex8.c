#include <stdio.h>

int main(void) {
  int input_age, age, teenager;
  printf("Enter age: ");
  scanf("%d", &age);
  teenager = age >= 13 && age <= 19;
  printf("%d\n", teenager);

  return 0;
}
