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
    printf("Enter number of books: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter title of book %d: ", i + 1);
        scanf(" %49[^\n]", b[i].title);
        printf("Enter author: ");
        scanf(" %49[^\n]", b[i].author);
        printf("Enter price: ");
        scanf("%f", &b[i].price);
    }
    printf("\nBook List:\n");
    printf("-----------------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("Title: %s\n", b[i].title);
        printf("Author: %s\n", b[i].author);
        printf("Price: %.2f\n\n", b[i].price);
    }
    return 0;
}
