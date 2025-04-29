#include <stdio.h>

int main(void) {
  int n, sum = 0;
  
  printf("Enter values; 0 ends.\n");
  scanf("%d", &n);      // first value
  while (n != 0) {      // while not finished
    sum += n;        // accumulate
    scanf("%d", &n); // read next value
  }
  printf("The sum is: %d\n", sum);
  
  return 0;
}
