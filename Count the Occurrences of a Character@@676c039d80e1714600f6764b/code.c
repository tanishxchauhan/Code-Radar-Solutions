#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char ch;
    int count = 0;

    fgets(str, sizeof(str), stdin);
    scanf(" %c", &ch); // Space to consume newline

    // Remove trailing newline from the string
    str[strcspn(str, "\n")] = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}