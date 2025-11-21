#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data d;

    d.i = 65;
    printf("After assigning int:\n");
    printf("i = %d\nf = %f\nc = %c\n\n", d.i,d.f,d.c);

    d.f = 3.14;
    printf("After assigning float:\n");
    printf("i = %d\nf = %f\nc = %c\n\n", d.i,d.f,d.c);

    d.c = 'A';
    printf("After assigning char:\n");
    printf("i = %d\nf = %f\nc = %c\n\n", d.i,d.f,d.c);

    return 0;
}
