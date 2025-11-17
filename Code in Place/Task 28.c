#include <stdio.h>

void printChar(char *p) {
    printf("%c\n", *p);   
}

int main() {
    char c = 'A';        
    printChar(&c);        

    return 0;
}