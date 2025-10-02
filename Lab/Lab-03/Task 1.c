#include <stdio.h>
int main(){
	float num1,num2;
	printf("Enter the Value of Num1:");
	scanf("%f",&num1);
	printf("Enter the Value of Num2:");
	scanf("%f",&num2);
	
	printf("Before Swaping\n Num1 = %.2f Num2=%.2f\n",num1,num2);
	
	num1 = num1+num2;
	num2 = num1-num2;
	num1 = num1-num2;
	
	printf("After Swaping\n Num1 = %.2f Num2=%.2f",num1,num2);
}
