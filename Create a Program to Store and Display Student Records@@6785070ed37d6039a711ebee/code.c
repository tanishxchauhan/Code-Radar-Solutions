struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student s;

    printf("Enter Name: ");
    scanf(" %s", s.name);
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.rollNo);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}