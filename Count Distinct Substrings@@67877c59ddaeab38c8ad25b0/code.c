#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    int len = strlen(str);
    int count = 0;
    char **substrings = (char **)malloc(len * (len + 1) / 2 * sizeof(char *));
    int substringCount = 0;

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            char *sub = (char *)malloc((j - i + 2) * sizeof(char));
            strncpy(sub, str + i, j - i + 1);
            sub[j - i + 1] = '\0';

            int isDistinct = 1;
            for (int k = 0; k < substringCount; k++) {
                if (strcmp(substrings[k], sub) == 0) {
                    isDistinct = 0;
                    break;
                }
            }

            if (isDistinct) {
                substrings[substringCount++] = sub;
                count++;
            } else {
                free(sub);
            }
        }
    }

    printf("%d", count);

    for (int i = 0; i < substringCount; i++) {
        free(substrings[i]);
    }
    free(substrings);

    return 0;
}