#include <stdio.h>
#include <string.h>

int main() {
    char str[1000]; // Assuming a maximum string length of 1000
    int i, j = 0;

    // Read the input string using fgets to handle spaces
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character if it exists
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // Remove spaces from the string
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // Null-terminate the new string

    // Print the string without spaces
    printf("%s", str);

    return 0;
}