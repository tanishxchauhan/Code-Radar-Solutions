#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        return 1; // Memory allocation failed
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *counted = (int *)calloc(n, sizeof(int)); // Track counted elements
    if (counted == NULL) {
        free(arr);
        return 1; // Memory allocation failed
    }

    for (int i = 0; i < n; i++) {
        if (counted[i] == 1) {
            continue; // Skip already counted elements
        }

        int count = 1; // Start with 1 for the current element
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                counted[j] = 1; // Mark as counted
            }
        }
        printf("%d %d\n", arr[i], count);
    }

    free(arr);
    free(counted);
    return 0;
}