#include <stdio.h> 

int main(void){
  int i = 1;
  float denom, e, limit, term;
  e = 1.0f;
  denom = 1.0f;
  printf("Enter limit: ");
  scanf("%f", &limit);
  term = (1.0f / denom);
  while(term > limit) {
    e += term;
    i++; 
    denom *= i;
    term = (1.0f / denom);
  }  
  printf("Iterations: %d\n", i - 1); 
  printf("e is approximately: %f\n", e);
  return 0;
}
