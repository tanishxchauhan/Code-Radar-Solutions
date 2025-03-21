#include <stdio.h>

void replaceWithGreatest(int arr[], int n) {
    int maxRight = -1; // The last element should be -1
    
    for (int i = n - 1; i >= 0; i--) {
        int temp = arr[i]; // Store current element before replacing
        arr[i] = maxRight; // Replace with maxRight
        if (temp > maxRight) {
            maxRight = temp; // Update maxRight
        }
    }
    
    // Print the modified array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n); // Read array size

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }

    replaceWithGreatest(arr, n); // Process the array

    return 0;
}
