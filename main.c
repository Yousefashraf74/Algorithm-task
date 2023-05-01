#include <stdio.h>
#include <stdlib.h>


int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int temp[n];
    int nonZeroCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp[nonZeroCount] = arr[i];
            nonZeroCount++;
        }
    }

    while (nonZeroCount < n) {
        temp[nonZeroCount] = 0;
        nonZeroCount++;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    printf("The modified array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


