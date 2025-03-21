#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int count[256] = {0};
    int order[1000]; // Store the order of characters
    int orderCount = 0;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (count[(unsigned char)str[i]] == 0) {
            order[orderCount++] = (unsigned char)str[i];
        }
        count[(unsigned char)str[i]]++;
    }

    for (int i = 0; i < orderCount; i++) {
        printf("%c : %d\n", (char)order[i], count[order[i]]);
    }

    return 0;
}