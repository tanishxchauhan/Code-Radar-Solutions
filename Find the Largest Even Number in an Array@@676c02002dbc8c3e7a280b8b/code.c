#include <stdio.h>

int main() {
    int n, max_even = -1;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) { // Check if the number is even
            if (arr[i] > max_even || max_even == -1) {
                max_even = arr[i]; // Update max even number
            }
        }
    }

    printf("%d\n", max_even);
    return 0;
}
