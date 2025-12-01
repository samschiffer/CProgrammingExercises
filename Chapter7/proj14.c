#include <stdio.h> 
#include <math.h>

int main(void){
  double x, y, new_y, dif;
  printf("Enter a positive number: ");
  scanf("%lf", &x);
  y = 1.0;
  do {
    new_y = (x / y + y) / 2;
    dif = y - new_y;
    dif = fabs(dif);
    y = new_y;
  } while(dif > 0.00001);
  printf("Square root: %lf\n", y);
  return 0;
}
