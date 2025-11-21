#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr= (int*)calloc(10,sizeof(int));
    printf("Array Elements are\n");
    for(int i=0;i<10;i++){
    printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}