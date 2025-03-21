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

    // Sorting the array
    qsort(arr, n, sizeof(int), compare);

    // Finding the median
    int median;
    if (n % 2 == 1) {
        median = arr[n / 2];  // Odd-sized array → middle element
    } else {
        median = (arr[n / 2] + arr[(n / 2) - 1]) / 2;  // Even-sized array → average of two middle elements
    }

    printf("%d\n", median);
    return 0;
}
