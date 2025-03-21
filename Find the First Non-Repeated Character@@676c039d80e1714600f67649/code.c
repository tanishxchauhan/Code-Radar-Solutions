#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int count[256] = {0};
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (count[(unsigned char)str[i]] == 1) {
            printf("%c", str[i]);
            return 0;
        }
    }

    printf("-");
    return 0;
}