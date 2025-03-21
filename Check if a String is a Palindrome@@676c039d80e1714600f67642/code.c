#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool isPalindrome(char str[]) {
    int len = strlen(str);
    int i = 0, j = len - 1;

    while (i < j) {
        if (tolower(str[i]) != tolower(str[j])) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    char str[1000]; // Assuming a maximum string length of 1000
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    if (isPalindrome(str)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}