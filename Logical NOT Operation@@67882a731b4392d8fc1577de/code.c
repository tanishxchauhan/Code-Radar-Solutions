#include <stdio.h>
#include <stdbool.h>

int main() {
    long x;
    scanf("%li ", &x); 

    bool z = !(x > 0);

    printf("%s\n", z ? "True" : "False");

    return 0;
}