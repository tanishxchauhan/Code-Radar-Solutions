#include <stdio.h>
#include <string.h>

void reverseWord(char *word) {
    int len = strlen(word);
    for (int i = 0; i < len / 2; i++) {
        char temp = word[i];
        word[i] = word[len - i - 1];
        word[len - i - 1] = temp;
    }
}

int main() {
    char input[1000];
    fgets(input, sizeof(input), stdin);

    // Remove trailing newline character if present
    int len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    char *token = strtok(input, " ");
    while (token != NULL) {
        reverseWord(token);
        printf("%s", token);
        token = strtok(NULL, " ");
        if (token != NULL) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}