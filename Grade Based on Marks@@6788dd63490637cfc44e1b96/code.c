#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x>=90){
        printf("A");
    }
    if(x>=80 && x<90){
        printf("B");
    }
    if(x>=70 && x<80){
        printf("C");
    }
    if(x>=60 && x<70){
        printf("D");
    }
    else{
        printf("F");
    }
    return 0;
}