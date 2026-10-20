
#include <stdio.h>
int countKey(int a[], int n, int key)
{
    int i, count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int a[100], n, i, key, count;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter key to search: ");
    scanf("%d", &key);
    count = countKey(a, n, key);
    printf("%d appears %d times\n", key, count);
    return 0;
}
