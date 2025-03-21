#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin); // Read the string, including spaces

    int vowelCount = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // Convert to lowercase for easier comparison
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }
    }

    // Remove the trailing newline if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    printf("%d\n", vowelCount);
    return 0;
}