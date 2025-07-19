#include <stdio.h>

int main() {
    int upis, sec, min, sat;
    printf("Upisi sekunde: ");
    scanf("%d", &upis);

    sat = upis / 3600;
    min = upis % 3600 / 60;
    sec = upis % 60;

    printf("Sati: %d\n", sat);
    printf("Minuta: %d\n", min);
    printf("Sekunde: %d\n", sec);
}
