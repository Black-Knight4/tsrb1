#include <stdio.h>

void main() {
    int a, sum = 0, n = 0;

    printf("Upisi prvu ocjenu: ");
    scanf("%d", &a);

    while (a >= 1 && a <= 5) {
        sum += a;
        n++;

        printf("Upisi sljedecu ocjenu: ");
        scanf("%d", &a);
    }

    float avg = sum / (float)n;
    printf("Prosjek: %.2f", avg);
}
