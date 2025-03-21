#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int wordCount = 0;
    int inWord = 0;

    // Remove trailing newline if present
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // Check if the string is empty or contains only whitespace
    int isOnlyWhitespace = 1; // Assume it's whitespace only
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) {
            isOnlyWhitespace = 0; // Found a non-whitespace character
            break;
        }
    }

    if (isOnlyWhitespace || strlen(str) == 0) {
        printf("0\n"); // Output 0 for empty or whitespace-only
        return 0;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            if (inWord) {
                wordCount++;
                inWord = 0;
            }
        } else {
            inWord = 1;
        }
    }

    if (inWord) {
        wordCount++;
    }

    printf("%d\n", wordCount);

    return 0;
}