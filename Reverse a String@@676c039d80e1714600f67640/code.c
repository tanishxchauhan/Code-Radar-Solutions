#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str); 

    strrev(str);     

    printf("%s\n", str); 
    return 0;
}