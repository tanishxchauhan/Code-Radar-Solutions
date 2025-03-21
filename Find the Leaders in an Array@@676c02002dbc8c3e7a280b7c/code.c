#include <stdio.h>

void findLeaders(int arr[], int n) {
    int max_from_right = arr[n - 1]; // Rightmost element is always a leader
    printf("%d ", max_from_right);

    // Traverse from right to left
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= max_from_right) {
            max_from_right = arr[i];
            printf("%d ", max_from_right);
        }
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
