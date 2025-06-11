#include <stdio.h>

void main() {
    float a;

    printf("Unesi prvi decimalan broj: ");
    scanf("%f", &a);

    float min = a;
    while (a != (int)a) {
        if ((a - (int)a) < (min - (int)min)) min = a;

        printf("Unesi sljedeci decimalni broj: ");
        scanf("%f", &a);
    }
    
    printf("Broj s najmanjim decimalnim djelom: %f", min);
}
