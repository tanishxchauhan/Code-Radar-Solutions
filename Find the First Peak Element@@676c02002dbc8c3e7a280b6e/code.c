#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Removed extra newline from scanf

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Removed extra newline from scanf
    }

    if (n == 0) {
        printf("-1\n");
        return 0;
    }

    if (n == 1) {
        printf("%d\n", arr[0]);
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if ((i == 0 || arr[i] > arr[i - 1]) && (i == n - 1 || arr[i] > arr[i + 1])) {
            printf("%d\n", arr[i]); // Added newline to printf
            return 0; // Exit after finding the first peak
        }
    }

    printf("-1\n"); // No peak found
    return 0;
}