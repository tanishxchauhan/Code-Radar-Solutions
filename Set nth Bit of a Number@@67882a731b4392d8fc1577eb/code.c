#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n);

    int mask = 1 << n; // Create a mask with the nth bit set

    num = num | mask; // Set the nth bit using bitwise OR

    printf("%d\n", num);
    return 0;
}