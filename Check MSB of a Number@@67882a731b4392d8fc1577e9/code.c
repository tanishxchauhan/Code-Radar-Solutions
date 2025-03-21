#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num < 0) {  // If the number is negative, MSB is 1 (set) in two's complement
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }

    return 0;
}