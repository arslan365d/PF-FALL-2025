#include <stdio.h>
int main( ){
int i=2;
float sum = 1.00;

while (i <=400){
 sum += 1.0/i;
 i++;
}
printf("The Sum from 1 to 1/400 is %.3f", sum);
return 0;
}
