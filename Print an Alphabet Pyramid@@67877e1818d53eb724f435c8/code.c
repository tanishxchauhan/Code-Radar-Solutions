#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c", 'A' + j); // Print characters starting from 'A'
        }
        printf("\n");
    }

    return 0;
}