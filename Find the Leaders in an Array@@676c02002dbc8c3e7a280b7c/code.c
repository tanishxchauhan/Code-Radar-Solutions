#include <stdio.h>

void findLeaders(int arr[], int n) {
    int leaders[n]; // Array to store leaders
    int index = 0;
    int max_from_right = arr[n - 1]; // Rightmost element is always a leader

    leaders[index++] = max_from_right; // Store last element as leader

    // Traverse from right to left
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= max_from_right) {
            max_from_right = arr[i];
            leaders[index++] = max_from_right;
        }
    }

    // Print leaders in correct order
    for (int i = index - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findLeaders(arr, n);
    
    return 0;
}
