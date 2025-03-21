#include <stdio.h>

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10; // Extract last digit and add to sum
        num /= 10;       // Remove last digit
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Compute sum of digits for each element and print the result
    for (int i = 0; i < n; i++) {
        printf("%d ", sumOfDigits(arr[i]));
    }
    printf("\n");

    return 0;
}
