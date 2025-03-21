#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // Print spaces for indentation
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print ascending numbers
        for (int k = 1; k <= i; k++) {
            printf("%d", k);
        }

        // Print descending numbers
        for (int l = i - 1; l >= 1; l--) {
            printf("%d", l);
        }

        printf("\n");
    }

    return 0;
}