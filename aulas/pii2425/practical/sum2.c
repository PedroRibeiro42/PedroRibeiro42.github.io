#include <stdio.h>

int main(void) {
   int n, sum = 0;
   
   printf("Enter values; 0 ends.\n");
   do {
       scanf("%d", &n); // next value
       sum += n;        // accumulate
   } while (n != 0);    // while not finished
   printf("The sum is: %d\n", sum);
   
   return 0;
}
