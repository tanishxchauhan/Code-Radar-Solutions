#include <stdio.h>
#include <string.h>

int main() {
    char str1[1000];
    char str2[1000];
    char concatenated[2000]; // Enough space for both strings

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Remove trailing newlines
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    // Concatenate manually
    int i = 0, j = 0;
    while (str1[i] != '\0') {
        concatenated[j++] = str1[i++];
    }
    i = 0;
    while (str2[i] != '\0') {
        concatenated[j++] = str2[i++];
    }
    concatenated[j] = '\0'; // Null-terminate the concatenated string

    printf("%s\n", concatenated);

    return 0;
}