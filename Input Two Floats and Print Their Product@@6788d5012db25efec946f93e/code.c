#include <stdio.h>

int main() {
    float x, y;

    // Improved scanf: Allow for spaces around the comma
    scanf("%f , %f", &x, &y); // Note the spaces around the comma

    float c = x * y;

    // Correct printf: Use the calculated value 'c'
    printf("Product: %.2f\n", c); // Added a newline for cleaner output

    return 0;
}
