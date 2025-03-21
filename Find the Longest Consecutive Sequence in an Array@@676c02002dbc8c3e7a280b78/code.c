#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    int maxLength = 0;
    for (int i = 0; i < n; i++) {
        int currentLength = 1;
        int currentNum = arr[i];
        for (int j = i + 1; j < n; j++) {
            if (arr[j] == currentNum + 1) {
                currentLength++;
                currentNum = arr[j];
            } else if (arr[j] > currentNum + 1) {
                break;
            }
        }
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    printf("%d\n", maxLength);

    return 0;
}