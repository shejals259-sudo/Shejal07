
#include <stdio.h>
int countEven(int a[], int n)
{
    int i, count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            count++;
    }
    return count;
}
int main()
{
    int a[100], n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Even numbers = %d", countEven(a, n));
    return 0;
}
