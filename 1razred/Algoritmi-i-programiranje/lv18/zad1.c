#include <stdio.h>

int main() {
    int a, b, c, d, e;
    float avg;

    printf("Upisi prvu ocjenu: ");
    scanf("%d", &a);
    printf("Upisi drugu ocjenu: ");
    scanf("%d", &b);
    printf("Upisi trecu ocjenu: ");
    scanf("%d", &c);
    printf("Upisi cetvrtu ocjenu: ");
    scanf("%d", &d);
    printf("Upisi petu ocjenu: ");
    scanf("%d", &e);

    if (a > 5 || a < 1 || 
        b > 5 || b < 1 || 
        c > 5 || c < 1 || 
        d > 5 || d < 1 || 
        e > 5 || e < 1) {
        printf("Ima neispravnih ocjena!\n");
    }
    else {
        avg = (a + b + c + d + e) / 5.f;
        printf("Aritmeticka sredina svih ocjena: %.2f\nOcjene vise od ili jednake aritmetickoj sredini svih ocjena:", avg);
        if (a >= avg) {
            printf("%d\n", a);
        }
        if (b >= avg) {
            printf("%d\n", b);
        }
        if (c >= avg) {
            printf("%d\n", c);
        }
        if (d >= avg) {
            printf("%d\n", d);
        }
        if (e >= avg) {
            printf("%d\n", e);
        }
    }
}
