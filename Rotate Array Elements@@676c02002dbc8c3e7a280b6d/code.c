#include <stdio.h>

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array to the right by K positions
void rotateArray(int arr[], int N, int K) {
    K = K % N; // Handle cases where K > N

    // Reverse the entire array
    reverse(arr, 0, N - 1);
    // Reverse the first K elements
    reverse(arr, 0, K - 1);
    // Reverse the remaining elements
    reverse(arr, K, N - 1);
}

int main() {
    int N, K;
    scanf("%d", &N);
    
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &K);

    rotateArray(arr, N, K);

    // Print the rotated array
    for (int i = 0; i < N; i++) {
        printf("%d\n ", arr[i]);
    }
    

    return 0;
}