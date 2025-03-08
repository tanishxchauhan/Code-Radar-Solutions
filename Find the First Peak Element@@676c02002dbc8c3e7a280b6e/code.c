#include <stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    for(int i =0;i<n;i++){
        if((i==0||arr[i]>arr[i+1])&&(i==n-1||arr[i]>arr[i+1])){
            printf("%d",arr[i]);
        }
        else if (n == 0) {
        printf("-1\n");
       
    }

    else if (n == 1) {
        printf("%d\n", arr[0]);
        
    }

    }
    return 0;
}