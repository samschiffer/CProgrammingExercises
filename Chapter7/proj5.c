#include <stdio.h> 
#include <ctype.h>

int main(void){
  int sum = 0;
  char ch;
  printf("Enter a word: ");
  while((ch = getchar()) != '\n'){
    ch = toupper(ch);
    switch(ch) {
	    case 'Q': case 'Z':
	      sum += 10;  
	      break;
	    case 'J': case 'X':
	      sum += 8;  
	      break;
	    case 'K':
	      sum += 5;  
	      break;
	    case 'F': case 'H':  case 'V': case 'W': case 'Y':
	      sum += 4;  
	      break;
	    case 'B': case 'C': case 'M': case 'P':
	      sum += 3;  
	      break;
	    case 'D': case 'G':
	      sum += 2;  
	      break;
	    default:
	      sum += 1;  
	      break; 
    }
  }  
  printf("Scrabble value: %d\n", sum);
  return 0;
}
