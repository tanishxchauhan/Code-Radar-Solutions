#include <stdio.h>
#include <string.h>

int isPalindrome(char *str, int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    int len = strlen(str);
    int maxLen = 1;
    int start = 0;

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (isPalindrome(str, i, j)) {
                if (j - i + 1 > maxLen) {
                    maxLen = j - i + 1;
                    start = i;
                }
            }
        }
    }

    for (int i = start; i < start + maxLen; i++) {
        printf("%c", str[i]);
    }

    return 0;
}