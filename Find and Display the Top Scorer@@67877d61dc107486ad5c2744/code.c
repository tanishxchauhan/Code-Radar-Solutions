#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n];

    
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNo, students[i].name, &students[i].marks);
    }
      
    int Index = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[Index].marks) {
            Index = i;
        }
    }
   


    return 0;
}
