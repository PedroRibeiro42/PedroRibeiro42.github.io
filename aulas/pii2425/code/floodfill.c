#include <stdio.h>

#define MAX 100      // Maximum matrix dimension

// Global variables
int rows;              // Number of lines
int cols;              // Number of rows
char m[MAX][MAX];      // Matrix of cells
int visited[MAX][MAX]; // Is a certain position already visited?

// Size of the component that includes position (y,x)
int f(int y, int x) {
  if (y<0 || y>=rows || x<0 || x>=cols) return 0; // Out of bounds
  if (visited[y][x]) return 0;  // Cell already visited
  if (m[y][x] == '.') return 0; // Base case: empty cell
  int count = 1;                // Non-empty cell
  visited[y][x] = 1;            // Mark as visited
  count += f(y-1, x);           // Adding neighbor cells
  count += f(y+1, x);
  count += f(y, x+1);
  count += f(y, x-1);
  return count;
}

// -----------------------------------------------------------
   
int main(void) {

  // Reading a matrix of chars
  scanf("%d %d", &rows, &cols);
  for (int i=0; i<rows; i++) {
    char line[cols+1];
    scanf("%s", line);
    for (int j=0; j<cols; j++) {
      m[i][j] = line[j];
      visited[i][j] = 0;
    }
  }
  
  // Testing the recursive function f(y,x);
  printf("f(0,0) = %d\n", f(0,0));
  printf("f(2,5) = %d\n", f(2,5));
  printf("f(4,0) = %d\n", f(4,0));

  return 0;
}
