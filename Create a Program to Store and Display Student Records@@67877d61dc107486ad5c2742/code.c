#include <stdio.h>

// Define the structure for Student
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    int n;

    // Read the number of students
    scanf("%d", &n);

    struct Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNo, students[i].name, &students[i].marks);
    }

    // Output student details in the required format
    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", 
               students[i].rollNo, students[i].name, students[i].marks);
    }

    return 0;
}
