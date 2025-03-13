#include <stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int new_array;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    int k;
    scanf("%d]\n",&k);
    for(int i=0;i<n;i++){
        arr[i] = arr[i+k];
        int new_array = arr[i+k];
    }
    printf("%d",new_array);
    return 0;
}