
#include <stdio.h>
int main()
{
    int a[100], n, i, key;
    int linear = 0, binary = 0;
    int low, high, mid, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter sorted array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter key to search: ");
    scanf("%d", &key);
    /* Linear Search */
    for (i = 0; i < n; i++)
    {
        linear++;
        if (a[i] == key)
            break;
    }
    /* Binary Search */
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        binary++;
        if (a[mid] == key)
        {
            found = 1;
            break;
        }
        else if (a[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (i < n && a[i] == key)
        printf("Linear Search Comparisons = %d\n", linear);
    else
        printf("Linear Search: Key not found, Comparisons = %d\n",
               linear);
    if (found)
        printf("Binary Search Comparisons = %d\n", binary);
    else
        printf("Binary Search: Key not found, Comparisons = %d\n",
               binary);
    return 0;
}
