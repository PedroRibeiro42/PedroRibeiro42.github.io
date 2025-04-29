#include <stdio.h>

void merge(int v[], int start, int middle, int end) {
  int aux[end-start+1]; // new temporary array
  int p1 = start;       // "Position" in the left half array
  int p2 = middle+1;    // "Position" in the right half array
  int cur = 0;          // "Position" in the array aux[]
  
  while (p1 <= middle && p2 <= end) { // While it is possible to compare
    if (v[p1] <= v[p2]) aux[cur++] = v[p1++]; // choose smaller
    else aux[cur++] = v[p2++];                // and add
  }
  
  while (p1<=middle) aux[cur++] = v[p1++]; // Add remainder elements
  while (p2<=end)    aux[cur++] = v[p2++];
  
  // Copy array aux[] to v[]
  for (int i=0; i<cur; i++) v[start+i] = aux[i];
}

void mergeSort(int v[], int start, int end) {
  if (start == end) return;        // base case
  int middle = (start + end) / 2;
  mergeSort(v, start, middle);     // recursive call
  mergeSort(v, middle+1, end);     // recursive call
  merge(v, start, middle, end);    // combine results
}

int main(void) {

  // Create array with 8 elements
  int n = 8;
  int v[] = {51,13,7,20,18,3,45,36};

  // Call mergesort
  mergeSort(v, 0, n-1);

  // Print sorted array
  for (int i=0; i<n; i++) printf("%d ", v[i]);
  printf("\n");
     
  return 0;
}
