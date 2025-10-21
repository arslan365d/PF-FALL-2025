#include<stdio.h>
int main()
{
	int num,reverseNo;
	printf("Enter number:");
	scanf("%d",&num);
    while(num !=0){
    	reverseNo = reverseNo*10 +  (num%10);
    	num = num /10;
	}
	printf("Reverse Number: %d",reverseNo);
}
