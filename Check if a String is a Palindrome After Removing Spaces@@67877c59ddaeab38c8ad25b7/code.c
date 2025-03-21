#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool isPalindrome(char *str) {
    int len = strlen(str);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    char strNoSpaces[1000];
    int j = 0;

    // Remove spaces and convert to lowercase
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            strNoSpaces[j++] = tolower(str[i]); 
        }
    }
    strNoSpaces[j] = '\0';

    if (isPalindrome(strNoSpaces)) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}