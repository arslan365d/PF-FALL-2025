#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("SUM OF DIAGONAL ELEMENTS!!!\n");
    printf("Enter the dimension of a square array: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Input elements in the array.\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf(" %d", &arr[i][j]);
    for (int i = 0; i < n; i++)
        sum += arr[i][i];
    printf("The sum of diagonal elements of the square array is %d.", sum);
    return 0;
}
