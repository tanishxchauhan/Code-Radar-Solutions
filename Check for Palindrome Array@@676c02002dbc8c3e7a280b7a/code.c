#include <stdio.h>

void checkPalindrome(int arr[], int n) {
    int left = 0, right = n - 1;

    while (left < right) {
        if (arr[left] != arr[right]) {
            printf("NO\n");
            return;
        }
        left++;
        right--;
    }

    printf("YES\n");
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    checkPalindrome(arr, n);
    return 0;
}
