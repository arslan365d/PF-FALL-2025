#include <stdio.h>
int main(){
	int r,c;
	printf("SUM OF DIAGONAL ELEMENTS!!!\n");
	printf("Enter the Rows of Matrix: ");
	scanf("%d",&r);
	printf("Enter the Columns of Matrix: ");
	scanf("%d",&c);
	int arr[r][c];
	printf("Enter the Elements of Matrix\n");
	int sum=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
		    if(i==j || (i+j) %2 ==0){
		       sum += arr[i][j]; 
		    }
		}
	}
	
	printf("The sum of Diagonal Element is %d",sum);
	
	
}
