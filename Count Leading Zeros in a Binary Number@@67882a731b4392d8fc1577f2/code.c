#include <stdio.h>

int main() {
    unsigned int num;  // Use unsigned int for bitwise operations
    scanf("%u", &num);

    int count = 0;
    unsigned int mask = 1 << 31; // Create a mask with MSB set

    for (int i = 0; i < 32; i++) {
        if (num & mask) { // Check if the current bit is set
            break; // Stop counting if a '1' is encountered
        }
        count++;
        mask >>= 1; // Shift the mask to the right
    }

    printf("%d\n", count);
    return 0;
}