#include <stdio.h>

int main(void) {
  // Initalization without explicitly declaring size
  int a[] = {1,2,3,4};

  // changing value of a position
  a[2] = 42;

  // showing values of the array
  for (int i=0; i<4; i++)
    printf("a[%d] = %d\n", i, a[i]);

  return 0;    
}
