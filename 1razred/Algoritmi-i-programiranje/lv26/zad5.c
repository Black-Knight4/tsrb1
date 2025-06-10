#include <stdio.h>

void main() {
    int a[6];
    int b[6];

    for (int i = 0; i < 6; i++) {
        printf("enter %d. num: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 6; i++) {
        int i2 = 5 - i;
        b[i] = a[i2];
        b[i2] = a[i];
    }

    printf("before: ");
    for (int i = 0; i < 6; i++) printf("%d, ", a[i]);

    printf("\nafter: ");
    for (int i = 0; i < 6; i++) printf("%d, ", b[i]);
}