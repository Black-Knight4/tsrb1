#include <stdio.h>

void main() {
    int a;
    int n;

    printf("koliko cijelih brojeva zelis upisati: ");
    scanf("%d", &n);


    printf("unesi 1. broj: ");
    scanf("%d", &a);

    int min = a;
    for (int i = 2; i <= n; i++) {
        printf("unesi %d. broj: ", i);
        scanf("%d", &a);

        if (a < min) min = a;
    }

    printf("najmanji broj: %d", min);
}
