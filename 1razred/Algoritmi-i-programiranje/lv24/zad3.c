#include <stdio.h>
#include <math.h>


void main() {
    float a, b;
 
    do {
        printf("enter nums: ");
        scanf("%f %f", &a, &b);
    } while (a < 0 || b < 0 || (int)a == a || (int)b == b);
 
    float sqrt_ = sqrtf(fmaxf(a, b));
    printf("sqrt: %f", sqrt_);
}
