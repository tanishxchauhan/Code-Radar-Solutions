#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char charToReplace, replacementChar;

    fgets(str, sizeof(str), stdin);
    scanf(" %c", &charToReplace); // Space to consume newline
    scanf(" %c", &replacementChar);

    // Remove trailing newline from the string
    str[strcspn(str, "\n")] = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == charToReplace) {
            str[i] = replacementChar;
        }
    }

    printf("%s\n", str);

    return 0;
}