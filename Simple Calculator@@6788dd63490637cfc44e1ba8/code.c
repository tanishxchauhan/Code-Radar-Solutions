#include <stdio.h>
#include <string.h> // Include string.h for strcmp

int main() {
    int x, y;
    char op[2]; // Use a character array to store the operator

    scanf("%d %d %1s", &x, &y, op); // Corrected scanf format specifier

    if (strcmp(op, "+") == 0) { // Use strcmp to compare strings
        printf("%d", x + y);
    } else if (strcmp(op, "-") == 0) {
        printf("%d", x - y);
    } else if (strcmp(op, "*") == 0) {
        printf("%d", x * y);
    } else if (strcmp(op, "/") == 0) {
        if(y == 0){
            printf("error");
        }else{
            printf("%d", x / y);
        }
    } else {
        printf("Invalid operator");
    }

    return 0;
}