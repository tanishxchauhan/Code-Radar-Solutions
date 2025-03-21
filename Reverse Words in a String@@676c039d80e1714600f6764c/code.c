#include <stdio.h>
#include <string.h>

int main() {
    char input[1000];
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0; // Remove newline

    char *word = strtok(input, " ");
    while (word != NULL) {
        for (int i = strlen(word) - 1; i >= 0; i--) {
            printf("%c", word[i]);
        }
        word = strtok(NULL, " ");
        if (word != NULL) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}