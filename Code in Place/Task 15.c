#include <stdio.h>

int main() {
int size;
printf("Find the Count of Even Numbers in an Array\n");
printf("Enter the Size of Array:");
scanf("%d",&size);
int arr[size],count=0;
printf("Enter the Elements:");
for(int i =0;i<size;i++){
    scanf("%d",&arr[i]);
}
for(int j=0;j<size;j++){
    if(arr[j] %2 ==0) count++;
}
 printf("The Count of Even Numbers in given array is %d",count);
return 0;
}
