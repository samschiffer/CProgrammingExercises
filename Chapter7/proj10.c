#include <stdio.h> 
#include <ctype.h>

int main(void){
  int sum = 0;
  char ch;
  printf("Enter a sentence: ");
  while((ch = toupper(getchar())) != '\n') {
    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
      sum++; 
    } 
  } 
  printf("Your sentence contains %d vowels\n", sum);
  return 0;
}
