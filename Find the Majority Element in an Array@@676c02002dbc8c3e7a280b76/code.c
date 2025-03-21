#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int majorityElement = -1;
    int majorityCount = n / 2;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > majorityCount) {
            majorityElement = arr[i];
            break; 
        }
    }

    printf("%d\n", majorityElement);

    return 0;
}