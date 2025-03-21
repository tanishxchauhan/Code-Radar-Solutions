#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int count[256] = {0}; // Assuming ASCII characters

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove trailing newline

    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c : %d\n", (char)i, count[i]);
        }
    }

    return 0;
}
