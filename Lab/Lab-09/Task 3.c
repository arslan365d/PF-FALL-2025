#include<stdio.h>
int main (void)
{
	int arr[3];
	// declare pointer variable
	int *ptr;
	// declare loop iterative variable
	int i;
	// ptr= &arr[0}
	ptr=arr;
	
	//use for loop to put values in all aray elements using pointer notation
	for(i=0;i<3;++i){
		*(ptr+i)=i+1;
	}
	
	// use for loop to print values of all array elements using pointer notation
	printf("\n Display value using pointers: \n");
	
	for(i=0;i<3;i++){
		printf("%d\n",*(ptr+i));
	}
	// use for loop to print addresses of all array elements using pointer notation
	printf("\n Displaying Address using pointers: \n");
	for(i=0;i<3;i++){
		printf("%p\n",ptr+i);
	}
	return 0;
}