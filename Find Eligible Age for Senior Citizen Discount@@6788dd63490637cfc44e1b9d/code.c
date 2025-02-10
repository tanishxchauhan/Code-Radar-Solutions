#include <stdio.h>

int main() {
    int age;

    // Read the age from the user
    scanf("%d", &age);

    // Check if the age is greater than or equal to 60
    if (age >= 60) {
        printf("Eligible\n"); // Print "Eligible" if the condition is true
    } else {
        printf("Not Eligible\n"); // Print "Not Eligible" otherwise
    }

    return 0; // Indicate successful execution
}