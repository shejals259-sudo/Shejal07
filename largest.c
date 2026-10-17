#include <stdio.h>
int main()
{
    int a[100], n, i, largest;
    int *p = a;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }
    largest = *p;
    for (i = 1; i < n; i++)
    {
        if (*(p + i) > largest)
        {
            largest = *(p + i);
        }
    }
    printf("Largest = %d\n", largest);
    return 0;
}
