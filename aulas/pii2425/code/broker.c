#include <stdio.h>

int main(void) {
  float amount, commission;

  printf("Enter amount: EUR ");
  scanf("%f", &amount);

  if(amount < 2500)
    commission = 30.0 + 0.017 * amount;
  else if(amount < 7500)
    commission = 55.0 + 0.0066 * amount;
  else if(amount < 20000)
    commission = 80.0 + 0.0034 * amount;
  else if(amount < 50000)
    commission = 110.0 + 0.0022 * amount;
  else
    commission = 150.0 + 0.0011 * amount;

  if (commission < 40.0)
    commission = 40.0;

  printf("Commission: EUR %.2f\n", commission);
 
  return 0 ;
}
