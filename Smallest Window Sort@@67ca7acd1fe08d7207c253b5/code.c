#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[n]; // Use variable length array (VLA) if your compiler supports it
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int start = -1, end = -2;
        int max = arr[0], min = arr[n - 1];

        for (int i = 1; i < n; i++) {
            if (arr[i] < max) end = i;
            else max = arr[i];
        }

        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] > min) start = i;
            else min = arr[i];
        }

        printf("%d\n", end - start + 1);
    }
    return 0;
}