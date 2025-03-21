#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool areAnagrams(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        return false;
    }

    int freq[256] = {0}; // Assuming ASCII characters

    for (int i = 0; i < len1; i++) {
        freq[tolower(str1[i])]++;
        freq[tolower(str2[i])]--;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    char str1[1000];
    char str2[1000];

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Remove trailing newlines
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    if (areAnagrams(str1, str2)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}