#include <stdio.h>
int main(){
    float x,y,z;
    scanf("%f %f %f",&x,&y,&z);
    float total = x+y+z;
    float avg = total/3;
    printf("Average: %.2f",avg);
}