#include <stdio.h>
#include <stdbool.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    bool z = x && y;

    printf("%s\n", z ? "True" : "False"); 

    return 0;
}