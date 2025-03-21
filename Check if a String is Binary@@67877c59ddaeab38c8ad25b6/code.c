#include <stdio.h>
#include <string.h>

int isBinary(char str[]) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != '0' && str[i] != '1') {
            return 0;  // Not binary
        }
    }
    return 1;  // Binary
}

int main() {
    char str[100];  // Assuming max length of 100
    scanf("%s", str);

    if (isBinary(str)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}