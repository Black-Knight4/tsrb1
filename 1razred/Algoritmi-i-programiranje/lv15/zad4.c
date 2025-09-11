#include <stdio.h>
#include <math.h>
#define PI 3.14

int main() {
    float a, beta;
    printf("Upisi duljinu katete a: "); 
    scanf("%f", &a);
    
    printf("Upisi vrijednost kuta beta u stupnjevima: "); 
    scanf("%f", &beta);

    beta = PI * beta / 180.f;
    float b = a * tanf(beta);
    float hyp = a / cosf(beta);

    printf("Duljina hipotenuze: %.2f \nDuljina katete b: %.2f \n", hyp, b);
}