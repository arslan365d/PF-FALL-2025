#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the Length of Array:");
    scanf("%d",&n);
    int *arr= (int*) calloc(n,sizeof(int));
    for (int i=0;i<n;i++){
    arr[i]=i*i;
    }
    printf("Array Elements are: \n");
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}