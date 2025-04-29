#include <stdio.h>

int main(void) {
  int l, w, h, v; // dimensions and volume

  l = 11;        // length
  w = 5;         // width
  h = 6;         // height
  v = l * w * h; // volume calculation

  printf("LxWxH: %d*%d*%d (cm)\n", l, w, h);
  printf("Volume: %d (cm^3)\n", v);
  
  return 0;
}
