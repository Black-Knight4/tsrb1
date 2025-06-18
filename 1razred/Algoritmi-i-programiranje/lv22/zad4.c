#include <stdio.h>

void main() {
    float a;
    int sum = 0, n = 0;

    for (int i = 1; i <= 5; i++) {
        printf("unesi %d. broj: ", i);
        scanf("%f", &a);

        if ((int)a == a) {
            sum += a;
            n++;
        }
    }

    float avg = (float)sum / n;

    printf("aritmeticka sredina cijlih brojeva: %.2f", avg);
}
