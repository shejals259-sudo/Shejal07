#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

void printStudent(struct Student s)
{
    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
}

void updateMarks(struct Student *s, float m)
{
    s->marks = m;
}

int main()
{
    struct Student s;
    float newMarks;

    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nBefore update:\n");
    printStudent(s);

    printf("\nEnter new marks: ");
    scanf("%f", &newMarks);

    updateMarks(&s, newMarks);

    printf("\nAfter update:\n");
    printStudent(s);

    return 0;
}
