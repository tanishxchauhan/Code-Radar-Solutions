#include <stdio.h>

int main() {
    int rows;

    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        // Print spaces for indentation
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // Print characters
        for (int k = 0; k <= i; k++) {
            printf("%c ", 'A' + k);
        }

        printf("\n"); // Move to the next line
    }

    return 0;
}