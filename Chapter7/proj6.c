#include <stdio.h> 

int main(void){
  printf("int: %u\n", (unsigned int) sizeof(int));  
  printf("short: %u\n", (unsigned int) sizeof(short));  
  printf("long: %u\n", (unsigned int) sizeof(long));  
  printf("float: %u\n", (unsigned int) sizeof(float));  
  printf("double: %u\n", (unsigned int) sizeof(double));  
  printf("long double: %u\n", (unsigned int) sizeof(long double));  
  return 0;
}
