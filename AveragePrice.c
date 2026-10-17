#include <stdio.h>
struct Book
{
    char title[50];
    char author[50];
    float price;
};
int main()
{
    struct Book b[100];
    int n, i;
    float sum = 0, average;
    printf("Enter number of books: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter title: ");
        scanf(" %49[^\n]", b[i].title);

        printf("Enter author: ");
        scanf(" %49[^\n]", b[i].author);
        printf("Enter price: ");
        scanf("%f", &b[i].price);
        sum = sum + b[i].price;
    }
    average = sum / n;
    printf("\nTotal price = %.2f\n", sum);
    printf("Average price = %.2f\n", average);
    return 0;
}
