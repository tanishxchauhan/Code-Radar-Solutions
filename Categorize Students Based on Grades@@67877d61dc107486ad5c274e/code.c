#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll, students[i].name, &students[i].marks);
    }

    for (int i = 0; i < n; i++) {
        char grade;
        if (students[i].marks >= 85) {
            grade = 'A';
        } else if (students[i].marks >= 70 && students[i].marks <= 84) {
            grade = 'B';
        } else {
            grade = 'C';
        }
        printf("Roll Number: %d, Name: %s, Grade: %c\n", students[i].roll, students[i].name, grade);
    }

    return 0;
}