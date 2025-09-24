#include<stdio.h>

int main()
{
 //	Hands-On Activity:1
 
 float weight,dosage;
 
 printf("Medical Dosage Calculator\n\n");
 
// Taking input of Weight from user.
 printf("Enter patient's weight(kg):");
 scanf("%f",&weight);
 
// Calculating Dosage.
 dosage = weight*0.8;
 
// Displaying the Dosage to user.
 printf("The dosage(mg) for patient is: %.2f",dosage);
}
