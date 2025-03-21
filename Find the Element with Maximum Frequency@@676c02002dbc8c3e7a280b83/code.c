#include <stdio.h>
#include <limits.h>

#define MAX 100000 // Assuming input values are within this range

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int freq[MAX] = {0}; // Frequency array

    // Count frequency of each element
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int maxFreq = 0, minElement = INT_MAX;

    // Find the element with max frequency (smallest in case of tie)
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] > maxFreq || (freq[arr[i]] == maxFreq && arr[i] < minElement)) {
            maxFreq = freq[arr[i]];
            minElement = arr[i];
        }
    }

    printf("%d\n", minElement);

    return 0;
}
