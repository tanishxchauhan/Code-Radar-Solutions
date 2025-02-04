#include <stdio.h>

int main() {
    int x;
    int y;
    scanf("%d %d", &x, &y); // It's good practice to separate the format specifiers in scanf
    int c = x + y;
    printf("Sum: %d\n", c); // Adding a newline character is good for output clarity
    return 0;
}