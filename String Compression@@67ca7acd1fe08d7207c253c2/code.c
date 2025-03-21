#include <stdio.h>
#include <string.h>

void compressString(char str[], char compressed[]) {
    int len = strlen(str);
    if (len == 0) {
        strcpy(compressed, "");
        return;
    }

    int count = 1;
    int compressedIndex = 0;
    compressed[compressedIndex++] = str[0];

    for (int i = 1; i <= len; i++) { // Loop to len to handle the last character
        if (i < len && str[i] == str[i - 1]) {
            count++;
        } else {
            if (count > 1) {
                char countStr[12]; // Enough for int to string conversion
                sprintf(countStr, "%d", count);
                for (int j = 0; j < strlen(countStr); j++) {
                    compressed[compressedIndex++] = countStr[j];
                }
            }
            if (i < len) {
                compressed[compressedIndex++] = str[i];
                count = 1;
            }
        }
    }
    compressed[compressedIndex] = '\0';

    if (strlen(compressed) >= len) {
        strcpy(compressed, str);
    }
}

