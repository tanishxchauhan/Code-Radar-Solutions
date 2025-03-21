#include <stdio.h>
#include <limits.h> // For INT_MIN and INT_MAX

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize variables
    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    // Find the two largest and two smallest numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }

        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2) {
            min2 = arr[i];
        }
    }

    // Maximum product can be from largest two OR smallest two (if negative)
    int maxProduct = (max1 * max2 > min1 * min2) ? max1 * max2 : min1 * min2;

    printf("%d\n", maxProduct);
    return 0;
}
