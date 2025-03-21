#include <stdio.h>

void findPairs(int arr[], int n, int target) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("%d %d\n", arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int n, target;
    
    // Read number of elements
    scanf("%d", &n);
    
    int arr[n];
    
    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read target sum
    scanf("%d", &target);
    
    // Find and print unique pairs
    findPairs(arr, n, target);
    
    return 0;
}
