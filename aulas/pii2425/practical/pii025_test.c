#include <stdio.h>

// Forward declaration of function to implement
int triangle(int, int, int);

int main(void) {

  // Read number of test cases
  int n;
  scanf("%d", &n);

  // For each test case read a,b,c and print
  // the result of calling triangle(c,b,c)
  for (int i=0; i<n; i++) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("triangle(%d,%d,%d) = %d\n", a, b, c, triangle(a,b,c));
  }
  
  return 0;
}
