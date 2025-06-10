#include <stdio.h>
#include <math.h>


void main() {
    float a, b, korijen;
 
    do {
        printf("Upisi dva realna pozitivna broja: ");
        scanf("%f %f", &a, &b);
    } while (a < 0 || b < 0 || (int)a == a || (int)b == b);
 
    korijen = sqrtf(fmaxf(a, b));
    printf("Drugi korijen veceg broja: %f", korijen);
}
