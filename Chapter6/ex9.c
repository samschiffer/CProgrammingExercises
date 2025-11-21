#include <stdio.h> 

int main(void){
  int n = 0;
  int i = 10;
  while(i >= 1){
    printf("%d ", i++);
    i /= 2;
    n++;
    if(n >= 100){
      break;
    }
  }
  printf("\n%d\n", n);
  return 0;
}
