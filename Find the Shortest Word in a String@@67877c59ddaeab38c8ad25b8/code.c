#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char shortestWord[1000] = "";
    char currentWord[1000] = "";
    int i, j = 0;

    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            if (strlen(shortestWord) == 0 || strlen(currentWord) < strlen(shortestWord)) {
                strcpy(shortestWord, currentWord);
            }
            j = 0;
            currentWord[0] = '\0';
        } else {
            currentWord[j++] = str[i];
            currentWord[j] = '\0';
        }
    }

    if (strlen(shortestWord) == 0 || strlen(currentWord) < strlen(shortestWord)) {
        strcpy(shortestWord, currentWord);
    }

    printf("%s", shortestWord);

    return 0;
}