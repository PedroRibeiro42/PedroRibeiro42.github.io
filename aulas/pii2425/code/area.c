#include <stdio.h>

#define PI 3.14159 

int main(void) {
  float radius, area;
  
  printf("Radius of the circle? ");
  scanf("%f", &radius);
  area = PI * radius * radius;
  printf("Area: %f\n", area);
  
  return 0;
}
