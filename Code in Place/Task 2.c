#include <stdio.h>
int main()
{
	float unitsConsumed, bill;
	printf("Electricity Bill Calculator!!!\n");
	
   // Taking Units as Input
    printf("Enter the Consumed Units:");
    scanf("%f",&unitsConsumed);
     
  // Calculating bill on the basis of units
    if(unitsConsumed>200){
    	bill = unitsConsumed*10;
    	printf("Your Bill is %.2f",bill);
	}else if(unitsConsumed>100){
		bill = unitsConsumed*7;
		printf("Your Bill is %.2f",bill);
	}else if(unitsConsumed>0){
		bill = unitsConsumed*5;
		printf("Your Bill is %.2f",bill);
	}else{
		printf("Please Enter Correct Units");
	}
}
