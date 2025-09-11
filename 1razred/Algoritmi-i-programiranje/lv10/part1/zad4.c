#include <stdio.h>

int main() {
    float num;

    printf("Upisi realan broj: ");
    scanf("%f", &num);
    while (num == (int)num) {
        printf("Upisi realan broj: ");
        scanf("%f", &num);
    }

    int i;
    for (i = 0; num != (int)num; i++) {
        num *= 10;
    }
    printf("Znamenki u decimalnom djelu broja: %d\n", i);
}