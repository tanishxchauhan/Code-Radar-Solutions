#include <stdio.h>

int main() {
    int rows;


    scanf("%d", &rows);



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