#include <stdio.h>
int main()
{
//	COFFEE MACHINE PROGRAM
 char typeOfCoffee,coffeeSize;
 float coffeeTime;
 int instructionForBlackCoffee(char coffeeSize);
 int instructionForWhiteCoffee(char coffeeSize);
 

 printf("COMPUTE THE COFFEE TIME!!!\n");
 printf("Enter the Coffee type as B for Black and W for White: ");
 scanf(" %c",&typeOfCoffee);
 
 
 switch(typeOfCoffee){
 	case 'B':
 		printf("Enter the Size of Coffee.Please Type D for Double Size and N for Normal Size: ");
        scanf(" %c",&coffeeSize);
 		printf("\nYou Ordered Black Coffee!\n\n");
 		coffeeTime = instructionForBlackCoffee(coffeeSize);
 		printf("\nTotal Time\t %.2fmins",coffeeTime);
 		break;
 	case 'W':
 		printf("Enter the Size of Coffee.Please Type D for Double Size and N for Normal Size: ");
        scanf(" %c",&coffeeSize);
	    printf("\nYou Ordered White Coffee!\n\n");
 		coffeeTime = instructionForWhiteCoffee(coffeeSize);
 		printf("\nTotal Time\t %.2fmins",coffeeTime);
	 break;
	default :
	printf("Invalid Input For type of Coffee\n");	
 }
 
}

int instructionForBlackCoffee(char coffeeSize){
   float blackCoffeeTime = 105;
	printf("Operation\tBlack Coffee\nPut Water\t20mins\nSugar\t\t20mins\nMix Well\t25mins\nAdd Coffee\t15mins\nAdd Milk\t-\nMix Well\t25mins\n");
    switch(coffeeSize){
    	case 'D':
    		blackCoffeeTime += blackCoffeeTime*0.5;
    		return blackCoffeeTime;
	    default:
	    	return blackCoffeeTime;
	}
   return 0;
}

int instructionForWhiteCoffee(char coffeeSize){
 float whiteCoffeeTime = 76;
	printf("Operation\tWhite Coffee\nPut Water\t15mins\nSugar\t\t15mins\nMix Well\t20mins\nAdd Coffee\t2mins\nAdd Milk\t4mins\nMix Well\t20mins\n");
    switch(coffeeSize){
    	case 'D':
    		whiteCoffeeTime += whiteCoffeeTime*0.5;
    		return whiteCoffeeTime;
	    default:
	    	return whiteCoffeeTime;
	}
   return 0;
}
 
