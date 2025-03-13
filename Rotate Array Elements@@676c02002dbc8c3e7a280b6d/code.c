#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read the size of the array

    int arr[n];  // Declare an array of size 'n'

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);  // Read the number of rotations

    k = k % n;  // Handle cases where k > n

    // Print rotated array
    for (int i = k; i < n; i++) {
        printf("%d\n", arr[i]); // Print each element in a new line
    }
    for (int i = 0; i < k; i++) {
        printf("%d\n", arr[i]); // Print each element in a new line
    }

    return 0;
}
