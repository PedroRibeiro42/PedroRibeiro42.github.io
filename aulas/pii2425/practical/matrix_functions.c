#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

// Prints the values of a rows x cols matrix
void show_matrix(int m[MAX_ROWS][MAX_COLS], int rows, int cols) {
  for (int i=0; i<rows; i++) {
    for (int j=0; j<cols; j++)
      printf("%d ", m[i][j]);
    printf("\n");
  }
}

// sums two matrices m1 and m2 of dimensions rows x cols matrix
// stores the result on matrix m3
void sum_matrix(int m1[MAX_ROWS][MAX_COLS],
                int m2[MAX_ROWS][MAX_COLS],
                int m3[MAX_ROWS][MAX_COLS],
                int rows, int cols) {
  for (int i=0; i<rows; i++)
    for (int j=0; j<cols; j++)
      m3[i][j] = m1[i][j] + m2[i][j];    
}

int main(void) {

  // Creates three 3x3 matrices
  int a[MAX_ROWS][MAX_COLS] = { {1,2,3}, {4,5,6}, {7,8,9} };
  int b[MAX_ROWS][MAX_COLS] = { {11,12,13}, {14,15,16}, {17,18,19} };
  int c[MAX_ROWS][MAX_COLS];

  // Sums and prints the resulting matrix
  sum_matrix(a, b, c, 3, 3);
  show_matrix(c, 3, 3);

  return 0;
}
