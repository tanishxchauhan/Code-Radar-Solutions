#include <stdio.h>

void decimalToBinary(int n) {
    if (n == 0) {
        printf("0"); // Handle the case of 0
        return;
    }

    int binary[32]; // Assuming a 32-bit integer
    int i = 0;

    while (n > 0) {
        binary[i] = n & 1; // Extract the least significant bit
        n >>= 1;           // Right shift to get the next bit
        i++;
    }

    // Print the binary representation in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int num;
    scanf("%d", &num);

    decimalToBinary(num);
    printf("\n"); // Add a newline for better formatting
    return 0;
}