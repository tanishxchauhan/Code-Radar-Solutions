#include <stdio.h>

int main() {
    int rows;

   
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // Print spaces for indentation
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print numbers
        for (int k = 1; k <= i; k++) {
            printf("%d ", k);
        }

        printf("\n"); // Move to the next line
    }

    return 0;
}