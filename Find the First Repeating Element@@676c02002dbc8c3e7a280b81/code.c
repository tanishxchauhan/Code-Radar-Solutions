#include <stdio.h>
#include <limits.h>

#define MAX 100000 // Assuming input values are within this range

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int index[MAX]; // Store first occurrence index
    for (int i = 0; i < MAX; i++) {
        index[i] = -1; // Initialize to -1 (not found)
    }

    int minIndex = INT_MAX; // Track the first repeating element's index

    for (int i = 0; i < n; i++) {
        if (index[arr[i]] != -1) { // If already found before
            if (index[arr[i]] < minIndex) {
                minIndex = index[arr[i]];
            }
        } else {
            index[arr[i]] = i; // Store the first occurrence index
        }
    }

    if (minIndex == INT_MAX) {
        printf("-1\n"); // No repeating element
    } else {
        printf("%d\n", arr[minIndex]); // Print the first repeating element
    }

    return 0;
}
