#include <stdio.h>

int is_prime(int num) {
    if (num < 2) return 0;
    if (num == 2 || num == 3) return 1;
    if (num % 2 == 0 || num % 3 == 0) return 0;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    
    
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input\n");
        return 1;
    }

    int arr[n];
    

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count_prime = 0;

    for (int i = 0; i < n; i++) {
        if (is_prime(arr[i])) {
            count_prime++;
        }
    }

    
    printf("%d\n", count_prime);

    return 0;
}
 

