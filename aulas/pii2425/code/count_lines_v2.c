#include <stdio.h>

int main(void) {
    int ch;           // code of a character
    int lines = 0;    // number of lines
    while ((ch=getchar()) != EOF) {
      if(ch == '\n')  // new line?
         lines++;
    }
    printf("%d lines\n", lines);
    
    return 0;
}
