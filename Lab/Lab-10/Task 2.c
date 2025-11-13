#include<stdio.h>
float sum(float*,float*);

int main()
{
  float num1,num2,result;
  printf("Find the Sum Of the Two Numbers\n");
  printf("Enter First Number:");
  scanf("%f",&num1);	
  printf("Enter Second Number:");
  scanf("%f",&num2);
  result = sum(&num1,&num2);
  printf("The Sum is %.2f",result);
  
  return 0;
}

float sum(float *a,float *b){
	return *a + *b;
}