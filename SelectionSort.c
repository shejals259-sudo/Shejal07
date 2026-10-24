
#include <stdio.h>
int main()
{
    int a[100], n, i, j, max, temp;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n - 1; i++)
    {
        max = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] > a[max])
                max = j;
        }
        temp = a[i];
        a[i] = a[max];
        a[max] = temp;
    }
    printf("Array in descending order: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
