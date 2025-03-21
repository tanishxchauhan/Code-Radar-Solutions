#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    bool isBinary = true;
    int len = strlen(str);

    // If the string is empty, it's considered binary
    if (len == 0) {
        isBinary = true;
    } else {
        for (int i = 0; i < len; i++) {
            if (str[i] != '0' && str[i] != '1') {
                isBinary = false;
                break;
            }
        }
    }

    if (isBinary) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}