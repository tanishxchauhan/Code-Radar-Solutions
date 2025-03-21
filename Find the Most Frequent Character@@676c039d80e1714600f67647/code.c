#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline
    str[strcspn(str, "\n")] = 0;

    int freq[256] = {0}; // Assuming ASCII characters
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) { // Consider only alphabetic characters
            freq[tolower(str[i])]++; // Case-insensitive counting
        }
    }

    char mostFrequentChar = '\0';
    int maxFrequency = 0;

    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFrequency) {
            maxFrequency = freq[i];
            mostFrequentChar = (char)i;
        } else if (freq[i] == maxFrequency && freq[i] > 0 && (char)i < mostFrequentChar) {
            mostFrequentChar = (char)i;
        }
    }

    printf("%c\n", mostFrequentChar);

    return 0;
}
