#include <stdio.h>
int is_prime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}
int main(){
    int n;
    scanf("%d", &n);
    int count_prime = 0;
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++){
        if(is_prime(arr[i])){
            count_prime++;
        }
        else{
            printf(0);
        }
    }
    return 0;

}   

