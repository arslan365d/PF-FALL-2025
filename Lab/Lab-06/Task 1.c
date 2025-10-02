#include <stdio.h>
int main()
{
	int i,j,rows=5,space;
	for(i=1;i<=5;i++){
		for(space = 1;space<=rows-i;space++){
			printf(" ");
		}
		for(j =1;j<=2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
	
		for(i=5;i>=1;i--){
		for(space = 1;space<=rows-i;space++){
			printf(" ");
		}
		for(j =1;j<=2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
}
