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

    // ** Corrected logic to match expected output **
    for (int i = k; i < n; i++) {
        printf("%d\n", arr[i]);  // Print in new lines
    }
    for (int i = 0; i < k; i++) {
        printf("%d\n", arr[i]);  // Print remaining elements
    }

    return 0;
}
