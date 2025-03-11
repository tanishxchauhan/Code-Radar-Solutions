#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);  

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
        
    }
    struct Student minStudent = students[0];
    for (int i = 1; i < n; i++) {
        if (students[i].marks < minStudent.marks) {
            minStudent = students[i];
        }

    }
     printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f\n",minStudent.rollNumber, minStudent.name, minStudent.marks);
           
    return 0;
}