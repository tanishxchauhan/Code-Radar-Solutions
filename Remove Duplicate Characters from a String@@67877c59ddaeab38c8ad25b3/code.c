#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str[1000];
    char result[1000];
    int resultIndex = 0;
    bool seen[256] = {false}; // Assuming ASCII characters

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (!seen[(unsigned char)str[i]]) {
            seen[(unsigned char)str[i]] = true;
            result[resultIndex++] = str[i];
        }
    }
    result[resultIndex] = '\0';

    printf("%s", result);
    return 0;
}