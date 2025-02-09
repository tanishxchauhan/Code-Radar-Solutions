#include <stdio.h>

int main() {
    int x, y, z;
    scanf("%d %d %d",&x,&y,&z);
    if (x == y && y == z && z == x) {
        printf("Equilateral\n");
    } else if (x == y || x == z || y == z) {
        printf("Isosceles\n");
    } else {
        printf("Scalene\n");
    }

    return 0;
}