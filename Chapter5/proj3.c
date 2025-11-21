#include <stdio.h> 

int main(void){
  float commission, rival_commission, value, shares, share_price;
  
  printf("Enter number of shares: ");
  scanf("%f", &shares);
  printf("Enter price per share: ");
  scanf("%f", &share_price);

  value = shares * share_price;
  printf("Total value: %f\n", value);
  
  if (value < 2500.00f) {
    commission = 30.00f + 0.17f * value;
  } else if (value < 6250.00f) {
    commission = 56.00f + .0066f * value;
  } else if (value < 20000.00f) {
    commission = 76.00f + .0034f * value;
  } else if (value < 50000.00f) {
    commission = 100.00f + .0022 * value;
  } else if (value < 500000.00f) {
    commission = 155.00f + .0011 * value;
  } else {
    commission = 255.00f + .0009f * value;
  }

  if (commission < 39.00f) {
    commission = 39.00f;
  }

  if (shares < 2000) {
    rival_commission = .03 * shares + 33.00f;
  } else {
    rival_commission = .02 * shares + 33.00f;
  }

  printf("Rival commission: %f\n", rival_commission);
  printf("Our commission: %f\n", commission);

  return 0;
}
