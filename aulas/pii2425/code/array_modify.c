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

// Changes all values between indices inf and sup to v
void modify_array(int a[], int inf, int sup, int v) {
  for (int i=inf; i<=sup; i++)
    a[i] = v;
}

int main(void) {

  int a[] = {1,2,3,4,5};

  show_array(a, 5);
  modify_array(a, 1, 3, 999); // changes values from indices 1 to 3
  show_array(a, 5);
  
  return 0;
}
