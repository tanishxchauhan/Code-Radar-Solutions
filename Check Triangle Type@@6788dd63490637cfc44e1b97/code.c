#include <stdio.h>

int main() {
    int x, y, z;
    if (x == y && y == z) {
        printf("Equilateral\n");
    } else if (x == y || x == z || y == z) {
        printf("Isosceles\n");
    } else {
        printf("Scalene\n");
    }

    return 0;
}