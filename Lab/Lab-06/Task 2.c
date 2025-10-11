#include <stdio.h>
int main()
{
  int num,i;
  long long fact=1;
  printf("Find Factorial Of a Number\n");
  printf("Enter the Number:");
  scanf("%d",&num);
  if(num>0){
	  	for(i=num; i>=1; i--){
	  			 fact *= i;
		  }
	  	printf("The Factorial of the given Number %d is %ld",num,fact);
  }else if(num == 0){
  		printf("The factorial of the given number %d is %ld",num,fact);
  }else{
  	printf("Invalid Number! Negative number has no factorial");
  }
}
