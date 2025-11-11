#include <stdio.h>

int sumNatural(int n)
{   
	if(n==0) return 0;
	return n+sumNatural(n-1);
}
int main()
{
	int num,sum=0;
	printf("Find the Sum of the First 'n' Natural Numbers!\n");
	printf("Enter the Number:");
	scanf("%d",&num);
	
	sum = sumNatural(num);
	
	printf("The Sum is %d",sum);
	
	return 0;
}
