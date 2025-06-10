#include <stdio.h>

int main() {
    float br;
    int cj, dec;
    printf("Upisi broj: ");
    scanf("%f", &br);

    cj = (int)br;
    dec = (int)((br - cj) * 100.f);

    if (dec > cj) {
        printf("Broj %d je manji od broja %d.", cj, dec);
    }
    else if (dec < cj) {
        printf("Broj %d je veci od broja %d.", cj, dec);
    }
    else {
        printf("Broj %d je jednak broju %d.", cj, dec);
    }
}
