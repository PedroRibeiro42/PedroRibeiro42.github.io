#include <stdio.h>

int is_prime(int i) {
  if (i==2) return 1;
  if (i%2 == 0) return 0;
  for (int j=3; j*j<=i; j+=2) // note the j*j<=i
    if (i % j == 0)
      return 0;
  return 1;    
}

int main(void) {

  int n;
  scanf("%d", &n);
  for (int i=2; i<=n; i++)
    if (is_prime(i) == 1)
      printf("%d\n", i);
  
  return 0;
}
