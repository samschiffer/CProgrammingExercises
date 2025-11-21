#include <stdio.h> 

int main(void){
  int n, m;
  m = 500;
  for (n = 0; m > 0; m /= 2, n++)
	  printf("%d ", m);
  printf("\n");
  return 0;
}
