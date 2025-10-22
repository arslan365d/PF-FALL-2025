#include<stdio.h>
#include <string.h>
int main()
{
	char firstName[20] , lastName[20],fullName[40];
	int countOfCharac = 0;
	printf("Enter your First Name:");
	scanf("%s",&firstName);
	printf("Enter your Last Name:");
	scanf("%s",&lastName);
	strcat(fullName,firstName);
	strcat(fullName," ");
	strcat(fullName,lastName);
	countOfCharac = strlen(fullName);
	printf("Your Full Name is %s",fullName);
	
	return 0;
}
