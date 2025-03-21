#include <stdio.h>

int findOccurrence(int arr[], int n, int target, char mode) {
    int result = -1; // Initialize to -1 (not found)

    if (mode == 'F') { // Find first occurrence
        for (int i = 0; i < n; i++) {
            if (arr[i] == target) {
                result = i;
                break; // Found the first, no need to continue
            }
        }
    } else if (mode == 'L') { // Find last occurrence
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] == target) {
                result = i;
                break; // Found the last, no need to continue
            }
        }
    }

    return result;
}

