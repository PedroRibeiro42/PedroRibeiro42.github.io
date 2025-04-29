#include <stdio.h>

int sequential_search(int key, int v[], int n) {
  for (int i=0; i<n; i++)
    if (v[i] == key)
      return i; // found key
  return -1;    // not found
}

int main() {

  int n = 8;
  int v[] = {8,4,3,6,2,6,5,9};

  printf("%d\n", sequential_search(8, v, n));
  printf("%d\n", sequential_search(7, v, n));
  printf("%d\n", sequential_search(6, v, n));
    
  return 0;
}
