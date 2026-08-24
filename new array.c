#include <stdio.h>

int main() {
    int n, i, index, value;

    printf("Enter n: ");
    scanf("%d", &n);

    int a[n + 1];

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter value to insert: ");
    scanf("%d", &value);

    printf("Enter index: ");
    scanf("%d", &index);

    // Shift elements to the right
    for (i = n; i > index; i--) {
        a[i] = a[i - 1];
    }

    a[index] = value;

    printf("New array: ");
    for (i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
