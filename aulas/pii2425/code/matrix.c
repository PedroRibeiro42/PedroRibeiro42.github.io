#include <stdio.h>

#define N 4

int main(void) {
  int a[N][N];

  // Initialize the matriz
  for (int i=0; i<N; i++)
    for (int j=0; j<N; j++)
      if (i==j) a[i][j] = 1; // main diagonal has 1
      else a[i][j] = 0;      // all other values are zero

  // print the resulting matrix
  for (int i=0; i<N; i++) {
    for (int j=0; j<N; j++)
      printf("%d ", a[i][j]);
    printf("\n");
  }
  
  return 0;
}
