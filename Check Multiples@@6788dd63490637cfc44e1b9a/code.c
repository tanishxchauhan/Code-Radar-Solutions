#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    if (x % y == 0) {
        printf("Yes\n"); // Added newline for better output
    } else {
        printf("No\n");  // Added semicolon and newline
    }
    return 0;
}