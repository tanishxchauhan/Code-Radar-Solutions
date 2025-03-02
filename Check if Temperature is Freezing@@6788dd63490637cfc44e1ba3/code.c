#include <stdio.h>
int main(){
    long x;
    scanf("%ld ",&x);
    if(x<0){
        printf("Freezing");
    }
    else{
        printf("Above Freezing");
    }
    return 0;
  
}