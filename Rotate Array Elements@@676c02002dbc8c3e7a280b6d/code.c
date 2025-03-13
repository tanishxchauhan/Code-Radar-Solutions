#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int new_array;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        arr[i] = arr[i+k];
        new_array = arr[i+k];
    }
    printf("%d",new_array);
    return 0;
}