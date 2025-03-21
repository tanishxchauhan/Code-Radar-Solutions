#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if present
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // Check for empty string
    if (strlen(str) == 0) {
        printf("0\n");
        return 0; // Exit early
    }

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    printf("%d\n", length);

    return 0;
}