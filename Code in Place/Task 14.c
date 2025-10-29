#include <stdio.h>
int main() {
int size;
printf("Find the Reverse of an Array\n");
printf("Enter the Size of Array:");
scanf("%d",&size);
int arr[size],reverse[size];
printf("Enter the Elements:");
for(int i =0;i<size;i++){
    scanf("%d",&arr[i]);
}
for(int j=0;j<size;j++){
    reverse[j] = arr[size-j-1];
}
printf("Reverse:");
for(int k=0;k<size;k++){
    printf("%d ",reverse[k]);
}

return 0;
}
