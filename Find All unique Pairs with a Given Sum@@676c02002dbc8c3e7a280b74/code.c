#include <stdio.h>

void findUniquePairs(int arr[], int n, int target) {
    // Iterate through each pair in the array
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("%d %d\n", arr[i], arr[j]);

                // Move `j` forward to skip duplicates
                while (j + 1 < n && arr[j] == arr[j + 1]) {
                    j++;
                }
            }
        }

        // Move `i` forward to skip duplicates
        while (i + 1 < n && arr[i] == arr[i + 1]) {
            i++;
        }
    }
}

int main() {
    int n, target;

    // Read number of elements
    scanf("%d", &n);
    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read target sum
    scanf("%d", &target);

    // Find and print unique pairs
    findUniquePairs(arr, n, target);

    return 0;
}
