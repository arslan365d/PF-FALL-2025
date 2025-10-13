#include <stdio.h>
int main()
{
	int num,numCopy,numCopy2,sum=0,count,i,palindrome=0;
	printf("Prime Number or Palindrome Number Checker!!!\nNoted if the number is even it tells you that is the given number is prime or not else it tells you about palindrome number or not\n");
	printf("Enter a five digit number:");
	scanf("%d",&num);
	numCopy = numCopy2 =  num;
	while(num!=0){
		sum += num % 10;
		num = num/10;
	}
	if(sum%2==0){
		if(num<=0){
			printf("Not a Prime Number!");
		}else{
			for(i=1;i<=num;i++){
				if(num%i == 0) count++;
		 }
		 
		 if(count>2){
		 	printf("Prime Number");
		 }else{
		 	printf("Not a Prime Number!");
		 }
		}
	
	}else{
		while(numCopy!=0){
			palindrome = palindrome *10 + (numCopy%10);
			numCopy = numCopy/10;
		}
		
		if(palindrome == numCopy2 ){
			printf("Palindrome Number");
		}else{
			printf("Not a Palindrome Number");
		}
	}
}
