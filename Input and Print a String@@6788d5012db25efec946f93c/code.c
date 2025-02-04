#include <stdio.h>

int main() {
    char str[100]; // Assuming a maximum string length of 99 characters + null terminator

    // Input using scanf (reads until whitespace)
    scanf("%99s", &str); // Limiting input to prevent buffer overflow

    // Output using printf
    printf("You entered: %s\n", str);

    return 0;
}