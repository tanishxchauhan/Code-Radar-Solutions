#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        if (i == 1) {
            printf("1\n");
        } else {
            printf("0 1\n");
        }
    }

    return 0;
}