#include <stdio.h>
struct Student
{
    char name[50];
    int roll;
    float marks;
};
void update(struct Student *s, float m)
{
    s->marks = m;
}
int main()
{
    struct Student s = {"Shejal", 101, 75.0};
    printf("Before update: %.2f\n", s.marks);
    update(&s, 95.0);
    printf("After update: %.2f\n", s.marks);
    return 0;
}
