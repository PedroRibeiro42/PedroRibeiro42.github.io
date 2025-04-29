#include <stdio.h>

// Maximum of two integers
int max(int a, int b) {
  if (a >= b) return a;
  else return b;
}

// Maximum of an array range: iterative version with a cycle
int maxIt(int v[], int start, int end) {
  int maxSoFar = v[start];
  for (int i=start+1; i<=end; i++)
    maxSoFar = max(maxSoFar, v[i]);
  return maxSoFar;
}

// Maximum of an array range: recursive version (1st + rest of array)
int maxRec1(int v[], int start, int end) {
  if (start == end) return v[start];       // base case
  int maxOther = maxRec1(v, start+1, end); // recursive call
  return max(v[start], maxOther);          // combine result
}

// Maximum of an array range: recursive version (divide into two halves)
int maxRec2(int v[], int start, int end) {
  if (start == end) return v[start];    // base case
  int middle = (start + end) / 2;
  int max1 = maxRec2(v, start, middle); // recursive call
  int max2 = maxRec2(v, middle+1, end); // recursive call
  return max(max1, max2);               // combine result
}

int main(void) {

  // Creating an example array
  int v[] = {2,6,1,9,3,4,8,0};

  // Testing the functions
  printf("%d\n", maxIt(v, 0, 7));
  printf("%d\n", maxRec1(v, 0, 7));
  printf("%d\n", maxRec2(v, 0, 7));
    
  return 0;
}
