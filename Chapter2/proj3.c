#include <stdio.h>

#define PI 3.14159f

int main(void) {
  float radius;
  printf("Input the radius of your sphere: ");
  scanf("%f", &radius);
  float volume = (4.0f / 3.0f) * PI * radius * radius * radius;
  printf("Volume equals: %.10g\n", volume);
  return 0;
}
