#include <stdio.h>
#include <stdbool.h>

int main() {
    long x, y;
    scanf("%ld %ld", &x, &y);

    bool z = (x > 0) && (y > 0); // Both x and y MUST be strictly positive

    printf("%s\n", z ? "True" : "False");

    return 0;
}