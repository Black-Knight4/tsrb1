#include <stdio.h>
#include <ctype.h>

void main() {
    float a, min;

    printf("Upisi prvi decimalni broj: ");
    scanf("%f", &a);
    min = a;

    while ((int)a != a) {
        if (min - (int)min > a - (int)a) min = a;

        printf("Upisi sljedeci decimalni broj: ");
        scanf("%f", &a);
    }

    printf("Broj s najmanjim decimalnim djelom: %.2f", min);
}
