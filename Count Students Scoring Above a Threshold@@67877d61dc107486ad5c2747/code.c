#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n;
    int count=0;
    float thr;
    scanf("%d", &n);  

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }
    scanf("%f",&thr);
    for (int i = 0; i < n; i++){
        if(students[i].marks>thr){
            count++;
        }
    }
    printf("Count of students scoring above %.2f: %d ",thr,count);
    return 0;


}