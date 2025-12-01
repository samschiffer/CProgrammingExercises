#include <stdio.h> 

int main(void){
  const int temperature_readings[30][24];  
  float total = 0.0f;
  int count; 
  for(int i = 0; i < 30; i++) {
    for(int j = 0; j < 24; j++) {
      count++;
      total += temperature_readings[i][j];
    }
  }
  printf("Average temp: %f", total / count);
  return 0;
}
