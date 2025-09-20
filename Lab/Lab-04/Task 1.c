#include <stdio.h>
int main()
{
	int givenChar;
	printf("Character Classification!!!\n");
	
    // Taking a Character as input
   printf("Enter a Character:");
   scanf("%c",&givenChar);
   
   // Converting the given character to integer type  
   givenChar = (int) givenChar;
   
  // Checking the given Character
   if(givenChar>=97 && givenChar<=122){
   	printf("The given character is classified as 'lowercase'");
   }else if(givenChar>=65 && givenChar<=90){
   	printf("The given character is classified as 'UPPERCASE'");
   }else if(givenChar>=48 && givenChar<=57){
   	printf("The given character is classified as 'Digit'");
   }else if((givenChar>=33 && givenChar<=47)||(givenChar>=58 && givenChar<=64)||(givenChar>=91 && givenChar<=96)||(givenChar>=123 && givenChar<=126)){
   	printf("The given character is classified as 'Special Character'");
   }else{
   	 printf("Invalid Character!!!");
   }
}   
