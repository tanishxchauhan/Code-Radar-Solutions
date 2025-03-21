#include <stdio.h>

int main() {
    char rows;
    scanf("%c", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i + 1; j++) {
            printf("%c ", A+j);
        }
        printf("\n");
    }

    return 0;
}