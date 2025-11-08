#include<stdio.h>
int main()
{
	int a = 10;
	int *ptra = &a;

		
	printf("The Value of a is %d\n",a);
	printf("The Address of a is %p\n",ptra);
	printf("The value of a is %d\n",*ptra);
	printf("The Address of a is %u\n",&a);
	printf("The Address of of pointer of a is %p",&ptra);

}
