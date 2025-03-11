#include <stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int z = (x>>y)&1;
    printf("%d",z);
    return 0;
}