#include <stdio.h>
int main()
{
	float side1,side2,side3;
	int isValidTriangle;
	printf("Triangle Type Identifier!!!\n");
	
   // Taking input of all three sides of triangle
    printf("Enter Side1 of Triangle:");
    scanf("%f",&side1);
    printf("Enter Side2 of Triangle:");
    scanf("%f",&side2);
    printf("Enter Side3 of Triangle:");
    scanf("%f",&side3);
    
   // Cheking the specific type of triangle 
   if((side1+side2>side3) && (side2+side3>side1) && (side1+side3>side2)){
   if(side1==side2 && side2==side3 && side1==side3){
   	printf("The Given Triangle is Equilateral");
   }else if(side1==side2 ||side2==side3 || side1==side3){
   	  	printf("The Given Triangle is Isosceles");  
   }else{
   		printf("The Given Triangle is Scalene");  
   }
  } else{
   		printf("The Given triangle is invalid!!");
   }
    
}
