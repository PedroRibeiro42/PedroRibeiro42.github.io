#include <stdio.h>

// Function to compute the string length
// (iterate over all position until terminator is reached)
int length(char str[]) {
  int len = 0;
  while (str[len] != '\0')
    len++;
  return len;
}

int main(void) {

  // Create 3 strings
  char s1[2] = "c";          // we can use exact size (+1 for '\0')
  char s2[100] = "code";     // we can use larger size than length
  char s3[] = "programming"; // we can ommit size

  // Call the length function for each of the 3 strings
  printf("length of \"%s\" is %d\n", s1, length(s1));
  printf("length of \"%s\" is %d\n", s2, length(s2));
  printf("length of \"%s\" is %d\n", s3, length(s3));
      
  return 0;
}

