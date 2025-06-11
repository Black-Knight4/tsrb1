#include <stdio.h>

void main() {
    float a[5], dec[5];
    int wh[5];

    for (int i = 0; i < 5; i++) {
        printf("Unesi %d. broj: ", i+1);
        scanf("%f", &a[i]);
    }

    for (int i = 0; i < 5; i++) {
        wh[i] = (int)a[i];
        dec[i] = a[i] - wh[i];
    }

    for (int i = 0; i < 5; i++) 
        printf("\nBroj: %f, Cijeli dio: %d, Decimalni dio: %f", a[i], wh[i], dec[i]);
    
}
