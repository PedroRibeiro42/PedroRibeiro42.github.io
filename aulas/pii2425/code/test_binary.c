#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_NUMBER 1
#define MAX_NUMBER 1000000000

int binary_search(int key, int v[], int n) {
   int low = 0, high = n - 1;
   while (low <= high) {
      int middle = low + (high - low) / 2;
      if (key < v[middle])       high = middle - 1;
      else if (key > v[middle])  low = middle + 1;
      else return middle; // found key
   }
   return -1; // not found
}

// Generate a random number between a and b
int random_number(int a, int b) {
  return a + rand()%(a-b+1);
}

// Generate an array with n random numbers
// between MIN_NUMBER and MAX_NUMBER
void generate(int v[], int n) {
  for (int i=0; i<n; i++)
    v[i] = random_number(MIN_NUMBER, MAX_NUMBER);
}

int main() {

  int n, q;
  scanf("%d %d", &n, &q);
  
  srand(time(NULL)); // Initialize the seed of the random generator  

  printf("Performing %d binary searches for n = %d\n", q, n);

  int v[n];
  generate(v, n);
  int count_misses = 0;
  for (int i=0; i<q; i++) {
    int key = random_number(MIN_NUMBER, MAX_NUMBER);
    int result = binary_search(key, v, n);
    if (result == -1) count_misses++;
  }
  printf("%.2f%% misses\n", (100.0*count_misses)/q);
     
  return 0;
}
