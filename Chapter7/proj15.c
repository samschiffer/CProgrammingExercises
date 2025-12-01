#include <stdio.h> 

int main(void){
  long double i, tot;
  printf("Enter a positive integer: ");
  scanf("%Le", &i);
  tot = i;
  while (i > 1) {
    i--;
    tot *= i;
  }  
  printf("Factorial: %Le\n", tot);
  return 0;
}
