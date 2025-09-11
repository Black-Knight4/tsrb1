#include <stdio.h>

int main() {
    int num, jed, des, sto;

    printf("Upisi broj: ");
    scanf("%d", &num);

    while (num < 999 && num > 100) {
        sto = num / 100;
        des = num % 100 / 10;
        jed = num % 10;
        printf("Srijedna vrijednost neparnih znamenki: %f\n", (sto + des + jed) / 3.f);
        printf("Upisi broj: ");
        scanf("%d", &num);
    }

    printf("Niste upisali troznamenkasti broj. Kraj algoritma.\n");
}
