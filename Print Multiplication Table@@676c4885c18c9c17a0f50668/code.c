#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for(i = 1; i <= 10; i++) {
        int k = n * i; 
        printf("%d x %d = %d\n", n, i, k);
    }

    return 0;
}
