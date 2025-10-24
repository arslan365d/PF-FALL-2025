#include <stdio.h>

int main() {
    int n = 9; //No Of Lines
    int i,j,k;
    int nsp = n/2,nst = 1;
    
    for(i=1;i<=n;i++){
    	
    	for(j=1;j<=nsp;j++){
    		printf(" ");
		}
		
		for(k=1;k<=nst;k++){
			printf("*");
		}
		if(i < n/2+1){
			 nsp--;
			 nst+=2;
		}else{
			nsp++;
			nst-=2;
		}
    	printf("\n");
	}

   
    return 0;
}
