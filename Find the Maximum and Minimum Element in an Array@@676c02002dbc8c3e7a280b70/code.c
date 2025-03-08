#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Corrected scanf

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n <= 0) {
        return 0; // Handle empty array
    }

    int max = arr[0]; // Initialize after reading the first element
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("%d %d\n", min, max); // Print min and max once

    return 0;
}