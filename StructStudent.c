#include <stdio.h>
struct Student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct Student s = {"Shejal", 101, 85.5};
    struct Student *p = &s;
    printf("Name: %s\n", p->name);
    printf("Roll: %d\n", p->roll);
    printf("Marks: %.2f\n", p->marks);
    return 0;
}
