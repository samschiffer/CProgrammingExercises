#include <stdio.h> 

int main(void){
  int i, n;
  char ch;
  
  printf("This program prints a table of squares.\n");
  printf("Enter a number of entries in a table: ");
  scanf("%d", &n);
  while((ch = getchar()) != '\n') ; 

  for(i = 1; i <= n; i++) {
    printf("%12d%12d\n", i, i * i);
    if (i % 24 == 0 && i != n) {
      printf("Press ENTER to resume...");
      //ch = getchar();
      while((ch = getchar()) != '\n') ; 
    }
  }  
  return 0;
}
