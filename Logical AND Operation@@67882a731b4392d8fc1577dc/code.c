#include <stdio.h>
#include <stdbool.h>

int main() {
    unsigned int x, y;
    scanf("%c %c", &x, &y);

    bool z = x && y;

    printf("%s\n", z ? "True" : "False"); 

    return 0;
}