#include <stdio.h>
#include <limits.h> // For INT_MAX

void findSecondSmallest(int arr[], int n) {
    int first_min = INT_MAX, second_min = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < first_min) {
            second_min = first_min;
            first_min = arr[i];
        } else if (arr[i] > first_min && arr[i] < second_min) {
            second_min = arr[i];
        }
    }

    if (second_min == INT_MAX) {
        printf("-1\n");
    } else {
        printf("%d\n", second_min);
    }
}

int main() {
    int n;
    scanf("%d", &n); // Read the size of the array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }

    findSecondSmallest(arr, n); // Find and print second smallest

    return 0;
}
