#include<stdio.h>
#include<string.h>
int main(){
	char firstName[10];
	char lastName[10];
	char fullName[22];
	
	printf("Enter your First Name: ");
	gets(firstName);
	printf("Enter your Last Name: ");
	gets(lastName);
	
	fullName[0] = '\0';
	
	strcat(fullName,firstName);
	strcat(fullName," ");
	strcat(fullName,lastName);
	
	printf("Your Full Name is : %s\n",fullName);
	
	return 0;
}
