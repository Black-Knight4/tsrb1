#include <stdio.h>
#include <math.h>

int main() {
    printf("Upisi realan broj: ");
    float br, dec;
    scanf("%f", &br);
    printf("Korijen aposultnog broja %.3f je: %.3f\n", br, sqrtf(fabs(br)));
    dec = br - (int)br;
    printf("Korijen aposultnog broja %.3f je: %.3f\n", dec, sqrtf(fabs(dec)));
    printf("Korijen aposultnog broja %d je: %.3f\n", (int)br, sqrt(abs((int)br)));
}
