#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

struct Student findTopper(struct Student a[], int n)
{
    int i;
    struct Student topper;

    topper = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i].marks > topper.marks)
        {
            topper = a[i];
        }
    }

    return topper;
}

int main()
{
    struct Student a[100], topper;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", a[i].name);

        printf("Roll: ");
        scanf("%d", &a[i].roll);

        printf("Marks: ");
        scanf("%f", &a[i].marks);
    }

    topper = findTopper(a, n);

    printf("\nTopper: %s (%.1f)\n", topper.name, topper.marks);

    return 0;
}
