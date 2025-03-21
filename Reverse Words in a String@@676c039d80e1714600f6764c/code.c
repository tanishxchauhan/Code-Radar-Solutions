#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverseWords(char *str) {
    int len = strlen(str);
    int start = 0, end = len - 1;

    // Reverse the entire string
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    // Reverse each word in the reversed string
    start = 0;
    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    str[strcspn(str, "\n")] = 0;

    reverseWords(str);
    printf("%s\n", str);

    return 0;
}