#include <stdio.h>
#include <string.h>

void selectionSort(char arr[][100], int n) {
    int i, j, min_idx;
    char temp[100];

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (strcmp(arr[j], arr[min_idx]) < 0) {
                min_idx = j;
            }
        }
        strcpy(temp, arr[min_idx]);
        strcpy(arr[min_idx], arr[i]);
        strcpy(arr[i], temp);
    }
}

void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}

