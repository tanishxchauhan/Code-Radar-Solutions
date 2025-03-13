#include <stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    int new_array[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    int k;
    scanf("%d]\n",&k);
    for(int i=0;i<n;i++){
        arr[i] = arr[i+k];
        arr[i+k]=new_array[i];
    }
    printf("%d",new_array);
    return 0;
}