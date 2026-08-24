#include <stdio.h>

int main() {
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Reverse order: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    return 0;
}
