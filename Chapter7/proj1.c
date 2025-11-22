#include <stdio.h> 

int main(void){
  long int i, n;
  
  printf("This program prints a table of squares.\n");
  printf("Enter a number of entries in a table: ");
  scanf("%ld", &n);

  for(i = 1; i <= n; i++) {
    printf("%12ld%15ld\n", i, i * i);
  }  
  return 0;
}
