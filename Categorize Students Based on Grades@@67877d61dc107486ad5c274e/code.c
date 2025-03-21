#include <stdio.h>

struct Student {
    int roll_number;
    char name[50];
    float marks;
    char grade;
};

// Function to assign grade based on marks
char getGrade(float marks) {
    if (marks >= 85)
        return 'A';
    else if (marks >= 70)
        return 'B';
    else
        return 'C';
}

int main() {
    int N;
    scanf("%d", &N);
    
    struct Student students[N];

    // Input student data
    for (int i = 0; i < N; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
        students[i].grade = getGrade(students[i].marks);
    }

    // Output student data
    for (int i = 0; i < N; i++) {
        printf("Roll Number: %d, Name: %s, Grade: %c\n", students[i].roll_number, students[i].name, students[i].grade);
    }

    return 0;
}