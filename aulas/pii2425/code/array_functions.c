#include <stdio.h>

// Prints the values of the array a of size n
void show_array(int a[], int n) {
  printf("{");
  for (int i=0; i<n; i++) {
    if (i>0) printf(",");
    printf("%d", a[i]);
  }
  printf("}\n");
}

// Returns the sum of all the values of the array a with size n
int sum_array(int a[], int n) {
  int sum = 0;
  for (int i=0; i<n; i++)
    sum += a[i];
  return sum;
}

int main(void) {

  // Creates an array if size 5 and initializes it
  int a[] = {1,2,3,4,5};

  // Calls the previously defined functions to showcase them
  show_array(a, 5);
  int sum = sum_array(a, 5);
  printf("sum = %d\n", sum);
  
  return 0;
}
