#include <stdio.h>
int main(){
    double radius;
    scanf("%lf",&radius);
    double area = 3.14*radius*radius;
    printf("Area: %.2lf",area);
    return 0;
}