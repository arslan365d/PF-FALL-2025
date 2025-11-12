#include <stdio.h>

int main() {
    int num = 10;
    float pi = 3.14;
    char letter = 'A';

    int *ptrNum = &num;
    float *ptrPi = &pi;
    char *ptrLetter = &letter;

    printf("Value of num: %d\n", *ptrNum);
    printf("Value of pi: %.2f\n", *ptrPi);
    printf("Value of letter: %c\n", *ptrLetter);

    return 0;
}
