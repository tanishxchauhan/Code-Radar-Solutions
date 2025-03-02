#include <stdio.h>
int main(){
    int x;
    scanf("%d ",&x);
    if(x==1){
        printf("Monday");
    }
    if(x==2){
        printf("Tuesday");
    }
    if(x==3){
        printf("Wednesday");
    }
    if(x==4){
        printf("Thursday");
    }
    if(x==5){
        printf("Friday");
    }
    if(x==6){
        printf("Saturday");
    }
    if(x==7){
        printf("Sunday");
    }
    else if (x==8 || x==0){
        printf("Invalid");
    }
    
    return 0;
  
}