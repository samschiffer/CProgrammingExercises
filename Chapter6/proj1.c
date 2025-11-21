#include <stdio.h> 

int main(void){
  float largest_number, input;
  largest_number = 0.0;
  for(;;){
    printf("Enter a number: ");
    scanf("%f", &input);
    if (input == 0) {
      break;
    }
    if (input > largest_number) {
      largest_number = input;
    }
  }
  printf("The largest number entered was %f\n", largest_number);
  return 0;
}
