#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000] = "      "; // Example: spaces only
    int wordCount = 0;
    int inWord = 0;

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

    printf("%d\n", wordCount); // Output: 0 for spaces only

    return 0;
}