#include <stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    int max = arr[0];
    int min  = arr[0];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 1;i<n;i++){
        if(arr[i]>max&&arr[i]<min){
            max = arr[i];
            min = arr[i];
            
        }
        printf("%d %d",min,max);
        
    }
    
    

    return 0;
}