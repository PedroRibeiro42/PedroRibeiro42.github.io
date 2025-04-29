#include <stdio.h>

float mean(float a, float b) {
  float x = (a + b) / 2.0;
  return x;
}

int main(void) {
  float x, y, z;
  
  printf("Enter 3 numbers: ");
  scanf("%f %f %f", &x, &y, &z);
  printf("Means\n");
  printf("%.2f and %.2f: %.2f\n", x, y, mean(x,y));
  printf("%.2f and %.2f: %.2f\n", y, z, mean(y,z));
  printf("%.2f and %.2f: %.2f\n", x, z, mean(x,z));
  
  return 0;
}
