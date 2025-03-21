#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000]; // Assuming a maximum string length of 1000
    fgets(str, sizeof(str), stdin);

    int wordCount = 0;
    int inWord = 0; // Flag to track if we are inside a word

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

    // Handle the last word if it's not followed by a space
    if (inWord) {
        wordCount++;
    }

    printf("%d\n", wordCount);

    return 0;
}