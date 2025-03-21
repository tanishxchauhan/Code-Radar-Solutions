#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num == 0) {
        printf("-1\n"); // Or handle as you wish, 0 has no set bits
        return 0;
    }

    int position = 0;
    while ((num & 1) == 0) {
        num >>= 1;
        position++;
    }

    printf("%d\n", position);
    return 0;
}