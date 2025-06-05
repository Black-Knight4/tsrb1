#include <stdio.h>

void main() {
    int a[5], n;

    for (int i = 0; i < 4; i++) {
        printf("\nenter num: ");
        scanf("%d", &a[i]);
    }

    printf("enter extra num: ");
    scanf("%d", &n);

    unsigned int checker = 0;
    for (int i = 0; i < 4; i++) {
        if (n < a[i]) {
            for (int j = 4; j > i; j--)
                a[j] = a[j - 1];

            a[i] = n;
            checker = 1;
            break;
        }
    }

    if (!checker) a[4] = n;

    for (int i = 0; i < 5; i++)
        printf("%d, ", a[i]);

}