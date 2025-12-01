#include <stdio.h> 

int main(void){
  double total, num;
  char ch;

  printf("Enter an expression: ");
  scanf("%lf", &total);
  while((ch = getchar()) != '\n') {
    switch (ch) {
      case '+':
        scanf("%lf", &num);
        total += num;
        break;	
      case '-':
        scanf("%lf", &num);
        total -= num;
        break;	
      case '*':
        scanf("%lf", &num);
        total *= num;
        break;	
      case '/':
        scanf("%lf", &num);
        total /= num;
        break;	
    } 
  }
  printf("Value of an expression: %lf\n", total); 
  return 0;
}
