#include <stdio.h>

#define N 10000000

int is_prime[N+1]; // 0: non-prime; 1: prime

void sieve() {
  for (int i=2; i<=N; i++) // initialize all numbers as prime
    is_prime[i] = 1;

  for (int i=2; i<=N; i++)
    if (is_prime[i])
      for (int j=i+i; j<=N; j+=i)
        is_prime[j] = 0;
}

int main(void) {
  
  sieve();
  
  for (int i=2; i<=N; i++)
    if (is_prime[i])
      printf("%d\n", i);
  
  return 0;
}
