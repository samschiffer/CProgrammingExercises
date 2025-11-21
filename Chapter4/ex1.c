#include <stdio.h>

int main(void) {
  int ai, aj, bi, bj, ci, cj, ck, di, dj, dk;
  ai = 5;
  aj = 3;
  printf("Answer a: %d %d\n", ai / aj, ai % aj); // 1 2
  bi = 2;
  bj = 3;
  printf("Answer b: %d\n", (bi + 10) % bj); // 0
  ci = 7;
  cj = 8;
  ck = 9;
  printf("Answer c: %d\n", (ci + 10) % ck / cj); // 1
  di = 1;
  dj = 2;
  dk = 3;
  printf("Answer d: %d\n", (di + 5) % (dj + 2) / dk); // 0

  return 0;
}
