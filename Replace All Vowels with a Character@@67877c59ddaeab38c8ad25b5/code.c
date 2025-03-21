#include <stdio.h>
#include <string.h>

int isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char str[1000];
    char replaceChar;

    fgets(str, sizeof(str), stdin);
    scanf("%c", &replaceChar);

    str[strcspn(str, "\n")] = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isVowel(str[i])) {
            str[i] = replaceChar;
        }
    }

    printf("%s", str);

    return 0;
}