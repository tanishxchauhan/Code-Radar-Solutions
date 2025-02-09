#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    if (x % 2 == 0) {
        printf("Even\n"); // Added newline for better output
    } else {
        printf("Odd\n");  // Added semicolon and newline
    }
    return 0;
}