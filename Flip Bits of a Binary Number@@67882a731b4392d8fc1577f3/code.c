#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int flipped_num = ~num; // Bitwise NOT operator

    printf("%d\n", flipped_num);
    return 0;
}