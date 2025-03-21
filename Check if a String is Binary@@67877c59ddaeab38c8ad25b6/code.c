#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    bool isBinary = true;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '0' && str[i] != '1') {
            isBinary = false;
            break;
        }
    }

    if (isBinary) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}