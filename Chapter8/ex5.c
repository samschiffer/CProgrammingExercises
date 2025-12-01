#include <stdio.h> 
#define N 40

int main(void){
  int fibs[N] = {0, 1};
  for(int i = 2; i < N; i++) {
    fibs[i] = fibs[i - 2] + fibs[i - 1];
  }  

  for(int i = 0; i < N; i++) {
    printf("%d\n", fibs[i]);
  }
  return 0;
}
