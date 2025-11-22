#include <stdio.h> 

int main(void){
  char ch;
	
  printf("Enter phone number: ");
  while((ch = getchar()) != '\n') {
    if(ch >= 65 && ch < 68) {
      printf("2");
    }
    else if(ch >= 68 && ch < 71) {
      printf("3");
    }
    else if(ch >= 71 && ch < 74) {
      printf("4");
    }
    else if(ch >= 74 && ch < 77) {
      printf("5");
    }
    else if(ch >= 77 && ch < 80) {
      printf("6");
    }
    else if(ch >= 80 && ch < 84) {
      printf("7");
    }
    else if(ch >= 84 && ch < 87) {
      printf("8");
    }
    else if(ch >= 87 && ch < 91) {
      printf("9");
    } else {
      printf("%c", ch);
    }
  } 
  printf("\n"); 
  return 0;
}
