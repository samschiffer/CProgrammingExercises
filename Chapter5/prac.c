#include <stdio.h>

int main(void){
  int i, j, k;
  i = 4;
  j = 5;
  k = 1;
  switch (i) {
    case 4: 
      printf("Four");
      break;
    case 3: 
      printf("Three");
      break;
    case 2:
      printf("Two");
      break;
    default:
      printf("Nothing");
      break;
  }
  return 0;
}
