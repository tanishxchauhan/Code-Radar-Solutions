#include <stdio.h>
#include <string.h>

int main() {
    char mainStr[1000], subStr[1000];
    fgets(mainStr, sizeof(mainStr), stdin);
    fgets(subStr, sizeof(subStr), stdin);

    mainStr[strcspn(mainStr, "\n")] = 0;
    subStr[strcspn(subStr, "\n")] = 0;

    if (strstr(mainStr, subStr) != NULL) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}