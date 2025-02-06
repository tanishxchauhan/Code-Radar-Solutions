#include <stdio.h>
#include <math.h>
int main(){
    double radius;
    scanf("%lf",&radius);
    double area = 3.14*sqrt(radius);
    printf("Area: %.2lf",area);
    return 0;
}