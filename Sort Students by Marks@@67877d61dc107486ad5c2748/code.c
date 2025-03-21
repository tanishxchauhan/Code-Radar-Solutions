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

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].roll, students[i].name, students[i].marks);
    }

    return 0;
}