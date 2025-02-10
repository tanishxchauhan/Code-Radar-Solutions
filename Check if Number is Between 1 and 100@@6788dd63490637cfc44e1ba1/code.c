#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(100>=x && x>0){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
    return 0;
}