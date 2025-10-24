#include <stdio.h>
int main(){
	int i,prev=1,next=1,sum;
	
	printf("%d %d ",prev,next);
	for(i=1;i<=1000;i++){
		sum = prev+next;
		printf("%d ",sum);
		prev = next;
		next = sum;
		
	}
}
