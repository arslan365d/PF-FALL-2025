#include<stdio.h>
int main (void)
{
int y=5;
int z=6;
int const*ptr=&y;
printf("%p\n",ptr);
//*ptr=&z;
//printf("%p\n",ptr);
//as it is a contanst pointer its value can not be change dbetween the executation |compilation of program
}