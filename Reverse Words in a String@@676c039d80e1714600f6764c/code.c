#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline
    str[strcspn(str, "\n")] = 0;

    char *wordStart = str;
    char *wordEnd = str;

    while (*wordEnd != '\0') {
        if (isspace(*wordEnd)) {
            reverseWord(wordStart, wordEnd - 1);
            wordStart = wordEnd + 1;
        }
        wordEnd++;
    }

    // Reverse the last word
    reverseWord(wordStart, wordEnd - 1);

    printf("%s\n", str);

    return 0;
}