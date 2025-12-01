#include <stdio.h> 

int main(void){
  char ch;
  int tot_chars, tot_words;
  tot_chars = tot_words = 0;
  printf("Enter a sentence: ");
  while((ch = getchar()) != '\n') {
    if (ch == ' ') {
      tot_words++;
    } else {
      tot_chars++;
    }  
  }
  tot_words++;
  printf("Average word length: %.1f\n", ((float) tot_chars) / tot_words);
  return 0;
}
