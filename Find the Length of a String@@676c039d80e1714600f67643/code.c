#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') {
        length++;

    }
    if(str[]=='0'){
        printf('0')
    }

    printf("%d\n", length);

    return 0;
}