#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char replaceChar;

    fgets(str, sizeof(str), stdin);
    scanf("%c", &replaceChar);

    str[strcspn(str, "\n")] = 0;

    char vowels[] = "aeiouAEIOU";
    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = 0; vowels[j] != '\0'; j++) {
            if (str[i] == vowels[j]) {
                str[i] = replaceChar;
                break; // No need to check other vowels
            }
        }
    }

    printf("%s", str);

    return 0;
}