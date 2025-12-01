#include <stdio.h> 

int main(void){
  int m1, d1, y1, m2, d2, y2, earlier;
  printf("Enter first date (mm/dd/yy): ");
  scanf("%d/%d/%d", &m1, &d1, &y1);  
  printf("Enter second date (mm/dd/yy): ");
  scanf("%d/%d/%d", &m2, &d2, &y2);
  
  earlier = 0;


  if (y1 < y2) {
    earlier = 1; 
  } else if (y2 < y1) {
    earlier = 2;
  } else {
    if(m1 < m2) {
      earlier = 1;
    } else if (m2 < m1) {
      earlier = 2;
    } else {
      if (d1 < d2) {
        earlier = 1;
      }
      else if (d2 < d1) {
        earlier = 2;
      }
    }
  }

  if (earlier == 1) {
    printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n" , m1, d1, y1, m2, d2, y2);
  }
  else if (earlier == 2) {
    printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n" , m2, d2, y2, m1, d1, y1);
  } else {
    printf("Dates are the same\n"); 
  }
  return 0;
}
