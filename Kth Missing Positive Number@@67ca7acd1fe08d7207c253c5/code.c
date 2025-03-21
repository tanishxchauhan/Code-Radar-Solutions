#include <stdio.h>

int findKthMissing(int arr[], int n, int k) {
    int missingCount = 0;
    int currentMissing = 1;
    int arrIndex = 0;

    while (missingCount < k) {
        if (arrIndex < n && arr[arrIndex] == currentMissing) {
            arrIndex++;
        } else {
            missingCount++;
            if (missingCount == k) {
                return currentMissing;
            }
        }
        currentMissing++;
    }
    return -1; // Should not reach here if k is valid
}
