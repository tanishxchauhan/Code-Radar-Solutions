#include <stdio.h>
#include <ctype.h>

void caesarCipher(char message, int shift, char encrypted) {
    int i = 0;
    while (message[i] != '\0') {
        char ch = message[i];
        if (isalpha(ch)) {
            char base = islower(ch) ? 'a' : 'A';
            encrypted[i] = (ch - base + shift) % 26 + base;
        } else {
            encrypted[i] = ch;
        }
        i++;
    }
    encrypted[i] = '\0'; // Null-terminate the encrypted string
}

int main() {
    char message[100];
    int shift;
    char encrypted[100]; // Store the encrypted message

    // Read the input message
    scanf("%[^\n]%*c", message); // Read entire line including spaces

    // Read the shift value
    scanf("%d", &shift);

    // Normalize the shift to the range [0, 25]
    shift = shift % 26;
    if (shift < 0) shift = shift + 26; // Handle negative shifts

    // Call the caesarCipher function
    caesarCipher(message, shift, encrypted);

    // Output the encrypted message
    printf("%s\n", encrypted);

    return 0;
}