#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        return 1; // Memory allocation failed
    }

    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    // Find the maximum element to determine the size for the frequency array
    int max_element = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max_element) {
            max_element = arr[i];
        }
    }

    // Allocate memory for the frequency array
    int *frequency = (int *)calloc(max_element + 1, sizeof(int));
    if (frequency == NULL) {
        free(arr);
        return 1; // Memory allocation failed
    }

    // Calculate frequency
    for (int i = 0; i < n; ++i) {
        frequency[arr[i]]++;
    }

    int max_frequency = 0;
    int result = INT_MAX;

    // Find the element with maximum frequency
    for (int i = 0; i <= max_element; ++i) {
        if (frequency[i] > max_frequency) {
            max_frequency = frequency[i];
            result = i;
        } else if (frequency[i] == max_frequency && i < result) {
            result = i;
        }
    }

    printf("%d\n", result);

    free(arr);
    free(frequency);

    return 0;
}