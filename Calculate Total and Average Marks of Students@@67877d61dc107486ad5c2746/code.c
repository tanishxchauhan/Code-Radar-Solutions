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
    float totalMarks = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll, students[i].name, &students[i].marks);
        totalMarks += students[i].marks;
    }
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Average Marks: %.2f\n", totalMarks / n);
    return 0;
}