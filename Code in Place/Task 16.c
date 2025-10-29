#include <stdio.h>

int main() {
    printf("Find the Two Largest Numbers in an Array\n");

    int size;
    printf("Enter the Size of Array: ");
    scanf("%d", &size);

    if (size < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }

    int arr[size];
    printf("Enter the Elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int firstMax, secondMax;

    // Initialize firstMax and secondMax
    if (arr[0] > arr[1]) {
        firstMax = arr[0];
        secondMax = arr[1];
    } else {
        firstMax = arr[1];
        secondMax = arr[0];
    }

    for (int j = 2; j < size; j++) {
        if (arr[j] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[j];
        } else if (arr[j] > secondMax && arr[j] != firstMax) {
            secondMax = arr[j];
        }
    }

    printf("First Largest Number: %d\n", firstMax);
    printf("Second Largest Number: %d\n", secondMax);

    return 0;
}

