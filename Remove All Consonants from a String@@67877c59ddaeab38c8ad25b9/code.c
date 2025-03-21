#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    char result[1000];
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isVowel(str[i]) || !isalpha(str[i])) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    printf("%s", result);
    return 0;
}