#include <stdio.h>

int is_prime(int i) {
  for (int j=2; j<i; j++)
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
