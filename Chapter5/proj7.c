#include <stdio.h> 

int main(void){
  int d1, d2, d3, d4;
  int h1, h2, l1, l2;
  int largest, smallest;
  printf("Enter four integers: ");
  scanf("%d %d %d %d", &d1, &d2, &d3, &d4);
  if (d1 > d2) {
    l1 = d2;
    h1 = d1;
  } else {
    l1 = d1;
    h1 = d2;
  }

  if (d3 > d4) {
    l2 = d4;
    h2 = d3;
  } else {
    l2 = d3;
    h2 = d4;
  }

  if (l1 < l2) {
    printf("Smallest: %d\n", l1);
  } else {
    printf("Smallest: %d\n", l2);
  }

  if (h1 > h2) {
    printf("Largest: %d\n", h1);
  } else {
    printf("Largest: %d\n", h2);
  }

  return 0;
}
