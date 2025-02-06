#include <stdio.h>
int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int total = x+y+z;
    int avg = total/3;
    printf("Average: %d",avg);
}