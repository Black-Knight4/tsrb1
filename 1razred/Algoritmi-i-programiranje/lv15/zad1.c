#include <stdio.h>
#include <math.h>

int main() {
    float a;
    printf("Unesi realan broj: ");
    scanf("%f", &a);

    int wh = truncf(a); // can be done with casting: (int) a
    float dec = a - wh;

    printf("____________________________ \n");
    printf("Broj   |   Drugi korijen \n");
    printf("---------------------------- \n");
    printf("%.2f   |   %2.f \n", a, sqrtf(a));
    printf("%d      |   %2.f \n", wh, sqrtf(wh));
    printf("%.2f   |   %2.f \n", dec, sqrtf(dec));
}