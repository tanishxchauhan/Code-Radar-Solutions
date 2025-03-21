#include <stdio.h>

int findKthSmallest(int arr[], int n, int k) {
    if (k < 1 || k > n) {
        return -1; // K is out of range
    }

    // Simple Selection Sort to find the k-th smallest element
    for (int i = 0; i < k; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap arr[i] and arr[min_idx]
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }

    return arr[k - 1]; // Return the k-th smallest element
}
