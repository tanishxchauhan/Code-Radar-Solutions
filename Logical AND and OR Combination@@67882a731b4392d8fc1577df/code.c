#include <stdio.h>
#include <stdbool.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    bool result = (x > 0) && (y < 0) || (x == 0);

    printf("%s\n", result ? "true" : "false"); // Ternary operator

    return 0;
}