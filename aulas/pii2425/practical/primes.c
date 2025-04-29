#include <stdio.h>
#include <stdbool.h>

#define LIMIT 10000000

bool is_prime(int n) {
    if (n < 2) return false;
    if (n % 2 == 0) return n == 2;
    if (n % 3 == 0) return n == 3;
    int p = 5;
    while (p * p <= n) {
      if (n % p == 0) return false;
      p += 2;
    }
    return true;
}

int main() {

  int count = 0;
  for (int n = 1; n < LIMIT; n++)
    if (is_prime(n))
      count++;
  printf("There are %d primes less than %d\n", count, LIMIT);
  
  return 0;
}

