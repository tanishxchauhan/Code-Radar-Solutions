#include <stdio.h>
int main(){
    int x ,y ;
    scanf("%d %d",&x,&y);
    int diff = y-x;
    if(diff>0){
        printf("Profit");
    }
    else{
        printf("Loss");
    }
    return 0;
}