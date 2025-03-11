#include <stdio.h>
int main(){
    int x,y,op;
    scanf("%d %d %d",x,y,op);
    if(op=="+"){
        printf("%d",x+y);
    }
    if(op=="-"){
        printf("%d",x-y);
    }
    if(op=="*"){
        printf("%d",x*y);
    }
    if(op=="/"){
        printf("%d",x/y);
    }

    return 0;
}