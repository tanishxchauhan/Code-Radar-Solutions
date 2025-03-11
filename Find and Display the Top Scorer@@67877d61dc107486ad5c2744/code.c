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

    // Initialize max to a very small value or to the marks of the first student
    float max = -1.0;
    int topScorerIndex = -1;

    for (int i = 0; i < n; i++) {
        if (students[i].marks > max) {
            max = students[i].marks;
            topScorerIndex = i;
        }
    }

    // Print the details of the top scorer
    if (topScorerIndex != -1) {
        printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f\n",
               students[topScorerIndex].rollNo, students[topScorerIndex].name, students[topScorerIndex].marks);
    } else {
        printf("No students found.\n");
    }

    return 0;
}