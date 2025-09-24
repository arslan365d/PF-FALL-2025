#include<stdio.h>

int main()
{
  //	Hands-On Activity:2
  
  float watts,kilowatts;
  
  printf("Engineering Unit Converter(from Watts to KiloWatts) \n\n");
  
 //  Taking input of watts from user.
 printf("Enter Power in Watts: ");
 scanf("%f",&watts);

//Calculating Kilowatts.
 kilowatts = watts / 1000;

//Displaying the output to user.
 printf("The Power in KiloWatts is: %.2f",kilowatts);

}
