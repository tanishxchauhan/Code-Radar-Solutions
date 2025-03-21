#include <stdio.h>
#include <stdlib.h>

void findUniquePairs(int arr[], int n, int target) {
    // Sort the array to handle duplicates efficiently
    qsort(arr, n, sizeof(int), (int (*)(const void *, const void *))cmpfunc);

    int left = 0, right = n - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            printf("%d %d\n", arr[left], arr[right]);

            // Skip duplicates
            int tempLeft = arr[left], tempRight = arr[right];
            while (left < right && arr[left] == tempLeft) left++;
            while (left < right && arr[right] == tempRight) right--;
        } 
        else if (sum < target) {
            left++;
        } 
        else {
            right--;
        }
    }
}

// Comparison function for qsort
int cmpfunc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
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
