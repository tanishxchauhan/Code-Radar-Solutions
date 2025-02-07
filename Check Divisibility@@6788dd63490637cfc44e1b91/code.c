#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    if(x%11 ==0 && x%5==0){
        printf("Divisible");

    }
    else{
        printf("Not Divisible");
    }
    return 0;
    
}