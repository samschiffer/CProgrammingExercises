#include <stdio.h>

int main(void) {
  int ai, aj;
  ai = 7;
  aj = 8;
  ai *= aj + 1;
  printf("Answer A: %d %d\n", ai, aj); // 63 8
  int bi, bj, bk;
  bi = bj = bk = 1;
  bi += bj += bk;
  printf("Answer B: %d %d %d\n", bi, bj, bk); // 3 2 1
  int ci, cj, ck;
  ci = 1;
  cj = 2;
  ck = 3;
  ci -= cj -= ck;
  printf("Answer C: %d %d %d\n", ci, cj, ck); // 2 -1 3
  int di, dj, dk;
  di = 2;
  dj = 1;
  dk = 0;
  di *= dj *= dk;
  printf("Answer D: %d %d %d\n", di, dj, dk); // 0 0 0
  return 0;
}
