#include<stdio.h>
#include <stdlib.h>
int main()
{
   int *arr = (int*)malloc(3 * sizeof(int));
   arr =(int*)realloc(arr, 5 * sizeof(int)); 
   printf("Enter array elements:\n");
   for (int i =0; i < 5; i++) {
   scanf("%d",&arr[i]);
   }
   for (int i =0; i < 5; i++) {
   printf("%d\t",arr[i]);
   }

   free(arr);
    return 0;
}