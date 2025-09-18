#include <stdio.h>
int main()
{
	int year;
	printf("Leap Year Checker!!!\n");
	
  // Taking the year as input
	printf("Enter Year:");
	scanf("%d",&year);
	
  // Checking the given year is leap or not
	if(year%400==0){
		printf("Leap Year");
	}else if(year%4==0){
		if(year%100 !=0){
			printf("Leap Year");
		}else{
			printf("Not Leap Year");
		}
	}else{
		printf("Not Leap Year");
	}
}
