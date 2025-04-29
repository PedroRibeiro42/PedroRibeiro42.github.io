#include <stdio.h>

// Generate all permutations starting at position "cur"
void goPerm(int cur, int v[], int n, int used[], int perm[]) {
  if (cur == n) { // Base case: we finish the permutation
    for (int i=0; i<n; i++) // Write permutation
      printf("%d ", v[perm[i]]);
    printf("\n");
  } else { // If we haven't finished, continue generating
    for (int i=0; i<n; i++) // try all elements
      if (!used[i]) {
        used[i] = 1;   // i is now used
        perm[cur] = i; // include it in the permutation
        goPerm(cur+1, v, n, used, perm); // recursive call
        used[i] = 0;   // is now unsed (no longer at current permtuation)
      }
  }
}

// Write all subsets of the array v[] of size n
void permutations(int v[], int n) {
  int used[n]; // is the element of position i on the permutation?
  for (int i=0; i<n; i++) used[i] = 0; // empty permutation at the start    
  int perm[n]; // the current permutation
  goPerm(0, v, n, used, perm); // call recursive function
}


int main(void) {

  // Create array of size 4
  int n = 4;
  int v[] = {2,4,6,8};

  // Call permutaations recursive function
  permutations(v, n);
  
  return 0;
}
