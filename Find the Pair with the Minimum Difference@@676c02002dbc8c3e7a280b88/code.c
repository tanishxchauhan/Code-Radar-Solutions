#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 1) {
        printf("-1\n");
        return 0;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        return 1; // Memory allocation failed
    }

    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    // Sort the array in ascending order
    qsort(arr, n, sizeof(int), compare);

    int minDifference = INT_MAX;
    int result1, result2;

    for (int i = 0; i < n - 1; ++i) {
        int difference = arr[i + 1] - arr[i];
        if (difference < minDifference) {
            minDifference = difference;
            result1 = arr[i];
            result2 = arr[i + 1];
        }
    }

    printf("%d %d\n", result1, result2);

    free(arr);

    return 0;
}