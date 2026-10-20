
#include <stdio.h>
int main()
{
    int a[100], n, i, key;
    int low, high, mid, ans = -1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter sorted array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter key: ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (a[mid] <= key)
        {
            ans = a[mid];
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (ans == -1)
        printf("None\n");
    else
        printf("Floor = %d\n", ans);
    return 0;
}
