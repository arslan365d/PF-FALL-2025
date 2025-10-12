#include <stdio.h>
int main()
{
	int i,j,rows=9,space,nsp=rows/2,nst=1;
	for(i=1;i<=rows;i++){
	
		for(space=1;space<=nsp;space++){
			printf(" ");
		}
		for(j=1;j<=nst;j++){
			printf("*");
		}
		
		if(i<rows/2+1){
			nst+=2;
			nsp--;
		}else{
			nst-=2;
			nsp++;
		}
		printf("\n");
	}
}
