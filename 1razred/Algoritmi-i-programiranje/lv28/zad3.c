#include <stdio.h>

void main() {
    float a[5];

    for (int i = 0; i < 5; i++) {
        printf("Unesi %d. broj: ", i+1);
        scanf("%f", &a[i]);
    }

    int sum = 0, n = 0;
    for (int i = 0; i < 5; i++) {
        if ((int)a[i] == a[i]) {
            sum += a[i];
            n++;
        }
    }

    float avg = (float)sum / n;
    printf("Aritmeticka sredina cjelih brojeva: %.2f", avg);
}
