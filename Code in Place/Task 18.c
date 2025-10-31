#include<stdio.h>
#include<string.h>

int main(){
	char str1[6]="Hello";
	char str2[6];
	strcpy(str2,str1);
	printf("Original String: %s\n",str1);
	printf("Copied String: %s",str2);
	
	
	return 0;
}
