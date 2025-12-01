#include <stdio.h> 
#include <ctype.h>
#include <string.h>

int main(void){
  const int segments[10][7] = {
    {1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 1},
    {1, 1, 1, 1, 0, 0, 1},
    {0, 1, 1, 0, 0, 1, 1},
    {1, 0, 1, 1, 0, 1, 1},
    {1, 0, 1, 1, 1, 1, 1},
    {1, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 0, 1, 1},
  };
  
  int dig;
  printf("Enter a digit 0-9: ");
  scanf("%d", &dig);
  
  int num_segs[7];
  memcpy(num_segs, segments[dig], 7 * sizeof(int));
  
  // Row 1
  putchar(' ');
  if(num_segs[0]) {
    putchar('_');
  } else {
    putchar(' ');
  }
  printf(" \n");

  // Row 2
  if(num_segs[5]) {
    putchar('|');
  } else {
    putchar(' ');
  }

  if(num_segs[6]) {
    putchar('_');
  } else {
    putchar(' ');
  }

  if(num_segs[1]) {
    putchar('|');
  } else {
    putchar(' ');
  }
  putchar('\n');

  // Row 3
  if(num_segs[4]) {
    putchar('|');
  } else {
    putchar(' ');
  }

  if(num_segs[3]) {
    putchar('_');
  } else {
    putchar(' ');
  }

  if(num_segs[2]) {
    putchar('|');
  } else {
    putchar(' ');
  }
  putchar('\n');

  return 0;
}

