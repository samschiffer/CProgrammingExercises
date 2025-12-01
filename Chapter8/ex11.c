#include <stdio.h> 

#define ROWS 8
#define COLS 8

int main(void){
  char checkerboard[ROWS][COLS];
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      if ((j + i) % 2 == 0) {
        checkerboard[i][j] = 'B'; 
      } else {
        checkerboard[i][j] = 'R';
      }
    }
  }
  
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%c ", checkerboard[i][j]);
    }
    printf("\n");
  }

  return 0;
}
