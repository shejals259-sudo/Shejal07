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
    int n, i, maxIndex = 0;
    printf("Enter number of books: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter title: ");
        scanf(" %49[^\n]", b[i].title);
        printf("Enter author: ");
        scanf(" %49[^\n]", b[i].author);
        printf("Enter price: ");
        scanf("%f", &b[i].price);
    }
    for (i = 1; i < n; i++)
    {
        if (b[i].price > b[maxIndex].price)
        {
            maxIndex = i;
        }
    }
    printf("\nMost Expensive Book:\n");
    printf("Title: %s\n", b[maxIndex].title);
    printf("Author: %s\n", b[maxIndex].author);
    printf("Price: %.2f\n", b[maxIndex].price);
    return 0;
}
