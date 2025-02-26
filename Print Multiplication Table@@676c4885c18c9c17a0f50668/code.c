#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 1) {
        printf("Table of 1:\n");
        for (int i = 1; i <= 10; ++i) {
            printf("1 x %d = %d\n", i, i);
        }
    } else if (n == 0) {
        printf(0)
    } else {
        for (int i = 1; i <= 10; ++i) {
            printf("%d x %d = %d\n", n, i, n * i);
        }
    }

    return 0;
}