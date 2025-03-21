#include <stdio.h>

int findDuplicate(int arr[], int n) {
    int freq[n]; // Create a frequency array
    for (int i = 0; i < n; i++) {
        freq[i] = 0; // Initialize all elements to 0
    }

    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == 1) {
            return arr[i]; // Return the duplicate element
        }
        freq[arr[i]]++;
    }

    return -1; // Should never reach here if input constraints are met
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findDuplicate(arr, n));
    
    return 0;
}
