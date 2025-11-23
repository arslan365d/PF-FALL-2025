#include<stdio.h>

int main()
{
    int n;
    printf("SORT YOUR ARRAY!!!\n");
    printf("Enter the Size of Array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the Elements of Array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int flag = 0;

    // Check if array is already sorted
    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            flag = 1;
            break;
        }
    }

    // If not sorted, apply Bubble Sort
    if(flag){
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){
                if(arr[j] > arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }

    printf("Sorted Array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
