#include <stdio.h>

void reverse(int v[], int start, int end) {
  if (start>=end) return; // Base case: array size < 2
  int tmp = v[start];     // Swap first with last
  v[start] = v[end];
  v[end] = tmp;
  reverse(v, start+1, end-1); // Recursive call for the rest
}

int main(void) {

  int n = 8;
  int v[] = {2,4,6,8,10,12,14,16};

  // Call reverse
  reverse(v, 0, n-1);

  // Print reversed array
  for (int i=0; i<n; i++) printf("%d ", v[i]);
  printf("\n");

  
  return 0;  
}

