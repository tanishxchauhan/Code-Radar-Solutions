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

void reverseWordsInString(char str[]) {
    int length = strlen(str);
    char *wordStart = NULL;
    
    for (int i = 0; i <= length; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            if (wordStart != NULL) {
                reverseWord(wordStart, &str[i - 1]);
                wordStart = NULL;
            }
        } else if (wordStart == NULL) {
            wordStart = &str[i];
        }
    }
}

int main() {
    char str[200]; // Assuming max length is 200
    fgets(str, sizeof(str), stdin);
    
    // Removing trailing newline if present
    str[strcspn(str, "\n")] = '\0';

    reverseWordsInString(str);
    printf("%s\n", str);
    
    return 0;
}