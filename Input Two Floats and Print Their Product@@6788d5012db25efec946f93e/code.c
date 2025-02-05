#include <stdio.h>

int main() {
    float x, y;

    printf("Enter two numbers separated by a comma (and optionally spaces): "); // Prompt the user

    // Allow spaces AND handle potential errors
    if (scanf("%f, %f", &x, &y)!= 2) { // Check if scanf read two values
        printf("Invalid input. Please enter two numbers separated by a comma.\n");
        return 1; // Indicate an error
    }

    float c = x * y;
    printf("Product: %.2f\n", c);

    return 0;
}