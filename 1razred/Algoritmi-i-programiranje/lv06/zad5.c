#include <stdio.h>

int main() {
    int r, i, u, uMin, uMax;
    printf("Upisi velicinu otpora otpornika u Ohmima: ");
    scanf("%d", &r);
    printf("Upisi vrijednost jakosti struje u A: ");
    scanf("%d", &i);

    if (i > 0 && r > 0 && r <= 10000) {
        u = i * r;
        uMin = u - (int)(u * 0.1f);
        uMax = u + (int)(u * 0.1f);
        printf("Velicina pada napona uz nominalnu vrijednost otpora: %d V\n", u);
        printf("Velicina pada napona uz toleranciju vrijednosti otpora od -10%: %d V\n", uMin);
        printf("Velicina pada napona uz toleranciju vrijednosti otpora od +10%: %d V\n", uMax);
    }
    else {
        printf("Jedna vrijednost nije ispravna!\n");
    }
}
