#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i + 1; j++) {
            if (i % 2 == 1) { // Odd rows
                printf("1");
            } else { // Even rows
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}