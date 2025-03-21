#include <stdio.h>

void fibonacciSeries(int n) {
    if (n <= 0) {
        return; // Handle invalid input (shouldn't happen due to validation)
    }

    int first = 0, second = 1, next;

    if (n >= 1) {
        printf("%d ", first);
    }
    if (n >= 2) {
        printf("%d ", second);
    }

    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }

    printf("\n"); // Add a newline at the end
}

