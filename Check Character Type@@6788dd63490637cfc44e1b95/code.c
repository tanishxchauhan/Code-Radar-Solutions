#include <stdio.h>

int main() {
    char ch;

    // Input a character
    scanf(" %c", &ch); // Notice the space before %c to consume any leftover newline

    // Check for vowels (case-insensitive)
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel\n");
    } 
    // Check for digits
    else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    } 
    // Check for consonants (letters that are not vowels)
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Consonant\n");
    } 
    // If it's none of the above, it's a special character
    else {
        printf("Special Character\n");
    }

    return 0;
}