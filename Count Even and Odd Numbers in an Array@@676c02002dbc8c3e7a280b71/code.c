#include <stdio.h>
int main(){
    int n;
    int count_odd=0;
    int count_even=0;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    for(int i =1;i<n;i++){
        if(i%2==0){
            count_even++;
        }
        if(i%2!=0){
            count_odd++;
        }

    }
    printf("%d %d",count_even,count_odd);
    return 0;
}