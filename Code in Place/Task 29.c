#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the Length of Array:");
    scanf("%d",&n);
    float *arr= (float*)malloc(n*sizeof(float));
    printf("Enter Array Elements\n");
    for (int i=0;i<n;i++){
    scanf("%f",&arr[i]);
    }
    printf("\nArray Elements are:\n");
    for(int i=0;i<n;i++){
    printf("%.2f ",arr[i]);
    }
    free(arr);
    return 0;
}