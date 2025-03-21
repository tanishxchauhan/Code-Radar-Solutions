#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows (odd): ");
    scanf("%d", &rows);

    if (rows % 2 == 0) {
        printf("Please enter an odd number of rows.\n");
        return 1; // Indicate an error
    }

    // Upper half of the diamond
    for (int i = 1; i <= rows / 2 + 1; i++) {
        // Spaces
        for (int j = 1; j <= rows / 2 + 1 - i; j++) {
            printf(" ");
        }
        // Asterisks
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (int i = rows / 2; i >= 1; i--) {
        // Spaces
        for (int j = 1; j <= rows / 2 + 1 - i; j++) {
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