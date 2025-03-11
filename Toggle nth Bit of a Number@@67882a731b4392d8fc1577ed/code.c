#include <stdio.h>

int main() {
    int number, n;

    // Read input
    scanf("%d %d", &number, &n);

    // Create a mask with a 1 at the nth position
    int mask = 1 << n;

    // Use bitwise XOR to toggle the nth bit
    int result = number ^ mask;

    // Print the result
    printf("%d\n", result);

    return 0;
}