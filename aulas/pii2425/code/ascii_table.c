#include <stdio.h>

int main(void) {
  char ch;

  for (ch = 32; ch<127; ch++) {
    if (ch % 8 == 0) {
      printf("\n"); // change line
    }
    printf("%3d: %c ", ch, ch); // %3d prints right alined with 3 "places"
  }
  printf("\n");
  
  return 0;
}
