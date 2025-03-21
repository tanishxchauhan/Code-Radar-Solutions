#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    int i = 0;
    while (str[i] != '\0') {
        if (str[i] != '0' && str[i] != '1') {
            printf("No");
            return 0;
        }
        i++;
    }

    printf("Yes");
    return 0;
}