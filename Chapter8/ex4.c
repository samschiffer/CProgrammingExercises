#include <stdio.h> 
#include <stdbool.h>

int main(void){
  bool weekend[7] = {[0] = true, [6] = true};
  for (int i = 0; i < (int) (sizeof(weekend) / sizeof(weekend[0])); i++) {
    printf("%d\n", (int) weekend[i]);
  }  
  return 0;
}
