#include <stdio.h>

int isprime(){
    int n;
    scanf("%d",&n);
    int prm=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            prm=0;
            break;
        }
    }
    if(prm==0){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
}
int main(){
    isprime(1);
    return 0;
}