#include <stdio.h>
struct Student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct Student s[100];
    struct Student *p = s;
    int n, i, topper = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter name: ");
        scanf(" %49[^\n]", (p + i)->name);
        printf("Enter roll number: ");
        scanf("%d", &(p + i)->roll);
        printf("Enter marks: ");
        scanf("%f", &(p + i)->marks);
    }
    for (i = 1; i < n; i++)
    {
        if ((p + i)->marks > (p + topper)->marks)
        {
            topper = i;
        }
    }
    printf("\nTopper Details:\n");
    printf("Name: %s\n", (p + topper)->name);
    printf("Roll: %d\n", (p + topper)->roll);
    printf("Marks: %.2f\n", (p + topper)->marks);
    return 0;
}
