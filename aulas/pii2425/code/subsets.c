#include <stdio.h>

// Generate all subsets starting at position "cur"
void goSubsets(int cur, int v[], int n, int used[]) {
  if (cur == n) { // Base case: we finish the subset
    for (int i=0; i<n; i++) // Write subset
      if (used[i]) printf("%d ", v[i]);
    printf("\n");
  } else { // If we haven't finished, continue generating
    used[cur] = 1; // Subsets that include the current element
    goSubsets(cur+1, v, n, used); // Recursive call
    used[cur] = 0; // Subsets that don't include the current element
    goSubsets(cur+1, v, n, used); // Recursive call
  }
}

// Write all subsets of the array v[] of size n
void subsets(int v[], int n) {
  // array of ints (T/F) to represent the subset
  int used[n];
  goSubsets(0, v, n, used); // call recursive function
}


int main(void) {

  // Create array of size 4
  int n = 4;
  int v[] = {2,4,6,8};

  // Call subsets recursive function
  subsets(v, n);
  
  return 0;
}
