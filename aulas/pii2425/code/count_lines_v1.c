#include <stdio.h>

int main(void) {
    int ch;              // code of a character
    int lines = 0;       // number of lines    
    do {
        ch = getchar();  // read a character
        if(ch == '\n')   // new line?
            lines++;
    } while(ch != EOF);
    printf("%d lines\n", lines);
    
    return 0;
}
