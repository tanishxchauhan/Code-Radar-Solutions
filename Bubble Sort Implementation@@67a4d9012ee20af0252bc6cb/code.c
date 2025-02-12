// Your code here..
#include <stdio.h>

int main() {
    int a[100], n, i;
    printf("enter the number\n");
    scanf("%d", &n);
    ;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
