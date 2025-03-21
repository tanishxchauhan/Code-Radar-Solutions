#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Upper half of the diamond
    for (int i = 1; i <= n; i++) {
        // Spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Asterisks
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Asterisks
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}