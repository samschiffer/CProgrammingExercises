#include <stdio.h> 

int main(void){
  int n = 0;
  for (int i = 10; i >= 1; i /= 2){
    printf("%d ", i++);
    n++;
    if(n >= 100) {
      break;
    }
  }  
  printf("\n%d\n", n);
  return 0;
}
