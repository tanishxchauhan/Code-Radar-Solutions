#include <stdio.h>

void calculateRunningSum(int arr[], int n) {
    int runningSum[n];  
    runningSum[0] = arr[0]; // First element remains the same

    printf("%d", runningSum[0]); // Print first element

    for (int i = 1; i < n; i++) {
        runningSum[i] = runningSum[i - 1] + arr[i];
        printf(" %d", runningSum[i]); // Print remaining elements with space
    }
    
    printf("\n"); // New line after output
}

int main() {
    int n;
    scanf("%d", &n); // Read the size of the array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }

    calculateRunningSum(arr, n); // Compute and print running sum

    return 0;
}
