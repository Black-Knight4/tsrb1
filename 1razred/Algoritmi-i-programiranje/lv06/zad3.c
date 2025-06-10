#include <stdio.h>
#include <math.h>

int main() {
    float a, v, b, p, o;

    printf("Upisi duljinu stranice a istokracnoga trokuta: ");
    scanf("%f", &a);
    printf("Upisi duljinu visine istokracnoga trokuta: ");
    scanf("%f", &v);

    if (a > 0 && a <= 10 && v > 0 && v <= 10) {
        b = sqrtf(powf(a / 2, 2) + v * v);
        p = v * a / 2;
        o = 2 * b + a;
        printf("Duljina kraka trokuta: %f cm\n", b);
        printf("Povrsina trokuta: %f cm2\n", p);
        printf("Opseg trokuta: %f cm\n", o);
    }
    else {
        printf("Jedna vrijednost nije ispravna!\n");
    }
}
