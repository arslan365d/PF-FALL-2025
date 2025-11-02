#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Programming";
    char copy[5];
    strncpy(copy, str, 4);
    copy[4] = '\0';
    printf("Copied string: %s", copy);
    return 0;
}
