// Example: sorting 10 integers
// ----------------------------------
// Pedro Ribeiro (DCC/FCUP) - 04/10/2019
// ----------------------------------

#include <stdio.h>
#include <stdlib.h>

// This function compares two elements of an array (needed for qsort)
// It should return:
//  - number < 0 if "a" is smaller than "b"
//  - number > 0 if "a" is larger than "b"
//  - zero, if "a" and "b" are equal
int compare_int(const void *a, const void *b) {
  int i1 = *((int *)a);
  int i2 = *((int *)b);

  if (i1 < i2) return -1;
  if (i1 > i2) return +1;
  return 0;
}

int main() {
  int i;
  // Example array
  int v[10] = {33, 4, 28, 18, 15, 2, 8, 17, 42, 39};
  
  printf("Before sorting: ");
  for (i=0; i<10; i++)
    printf("%d ", v[i]);
  putchar('\n');
  
  // Call to standard sort algorithm in C
  // qsort(array, number_elementos, size_one_element, comparator)
  qsort(v, 10, sizeof(int), compare_int);
  
  printf("After sorting: ");
  for (i=0; i<10; i++)
    printf("%d ", v[i]);
  putchar('\n');

  return 0;
}
