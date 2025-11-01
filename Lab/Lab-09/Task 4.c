#include<stdio.h>

void cubeByReference(int *nptr){
	*nptr = *nptr * *nptr * *nptr;
}

int main (void)
{
	int n=5; // initialize number
	printf("The original value of number is %d \n",n);
	// pass address of the number to cubeByReference
	cubeByReference(&n);
	printf("The new value of number is %d",n);
	
}
