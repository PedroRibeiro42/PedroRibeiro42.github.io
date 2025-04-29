#include <stdio.h>

int main(void) {
  int i, n;    

  printf("Upper limit: ");
  scanf("%d", &n);
  i = 1;
  while (i <= n) {
    printf("%d\t%d\n", i, i*i); // \t is a tab
    i ++;
  }
  
  return 0;
}
