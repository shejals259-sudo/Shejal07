#include <stdio.h>
float average(int a[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    return (float)sum / n;
}
int aboveAvg(int a[], int n, float avg)
{
    int i, count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > avg)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int a[100], n, i;
    float avg;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d array elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    avg = average(a, n);
    printf("\nAverage = %.1f\n", avg);
    printf("Above average count = %d\n",
           aboveAvg(a, n, avg));
    return 0;
}
