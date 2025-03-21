#include <stdio.h>

void moveZerosToEnd(int arr[], int n) {
    int index = 0; // Pointer to track non-zero element position

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }

    // Fill the remaining positions with zeros
    while (index < n) {
        arr[index++] = 0;
    }

    // Print the modified array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    moveZerosToEnd(arr, n);
    return 0;
}
