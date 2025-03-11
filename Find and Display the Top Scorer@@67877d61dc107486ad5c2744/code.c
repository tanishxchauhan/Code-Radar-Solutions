#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);
    int max = 0;
    int a = 0;

    struct Student students[n];

    
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNo, students[i].name, &students[i].marks);
    }
    for(int i=0;i<n;i++){
        if(students[i].marks>max){
            max=students[i].marks;
            a=i;
        }

    }
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f\n",students[i].rollNo,students[i].name,students[i].marks);


    return 0;
}
