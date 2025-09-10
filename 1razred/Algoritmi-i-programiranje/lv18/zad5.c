#include <stdio.h>

int main() {
    float temp, min = 0;
    printf("Upisi cijeli ili realan broj: ");
    scanf("%f", &temp);
    if ((temp != (int)temp)) {
        if (min == 0 || temp < min) {
            min = temp;
        }
    }

    printf("Upisi cijeli ili realan broj: ");
    scanf("%f", &temp);
    if ((temp != (int)temp)) {
        if (min == 0 || temp < min) {
            min = temp;
        }
    }

    printf("Upisi cijeli ili realan broj: ");
    scanf("%f", &temp);
    if ((temp != (int)temp)) {
        if (min == 0 || temp < min) {
            min = temp;
        }
    }

    printf("Najmanji realni upisani broj: %.1f\n", min);
}
