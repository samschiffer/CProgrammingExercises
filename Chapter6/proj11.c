#include <stdio.h> 

int main(void){
  int n;
  float denom, e;
  e = 1.0f;
  denom = 1.0f;
  printf("Enter n: ");
  scanf("%d", &n);
  for(int i = 1; i <= n; i++) {
    denom *= i;
    e += (1.0f / denom); 
  }   
  printf("e is approximately: %f\n", e);
  return 0;
}
