#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);

    int count = 0;

    if (num == 0) {
        printf("32\n"); // All bits are trailing zeros
        return 0;
    }

    while ((num & 1) == 0) {
        count++;
        num >>= 1;
    }

    printf("%d\n", count);
    return 0;
}