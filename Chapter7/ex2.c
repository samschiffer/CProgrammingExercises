#include <stdio.h> 

#define CONSTANT_1 010E2 
#define CONSTANT_2 32.1E+5
#define CONSTANT_3 0790
#define CONSTANT_4 100_000
#define CONSTANT_5 3.97e-2

int main(void){
  printf("%d", CONSTANT_1);  
  printf("%f", CONSTANT_2);  
  // printf("%f", CONSTANT_3);  
  // printf("%f", CONSTANT_4);  
  printf("%f", CONSTANT_5);  
  return 0;
}
