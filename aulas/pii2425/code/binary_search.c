#include <stdio.h>

int binary_search(int key, int v[], int n) {
   int low = 0, high = n - 1;
   while (low <= high) {
      int middle = low + (high - low) / 2;
      if (key < v[middle])       high = middle - 1;
      else if (key > v[middle])  low = middle + 1;
      else return middle; // found key
   }
   return -1; // not found
}

int main() {

  int n = 6;
  int v[] = {2, 5, 6, 8, 9, 12};

  printf("%d\n", binary_search(5, v, n));
  printf("%d\n", binary_search(7, v, n));
  printf("%d\n", binary_search(9, v, n));
    
  return 0;
}

