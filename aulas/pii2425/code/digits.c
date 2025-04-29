#include <stdio.h>

int main(void) {
  int digits = 0, n;
  
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  do {
    n /= 10;   // quotient of division by 10
    digits++;  // one more digit
  } while (n > 0);
  printf("%d digit(s)\n", digits);
  
  return 0;
}
