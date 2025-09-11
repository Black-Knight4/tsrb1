#include <stdio.h>
#include <math.h>
#define PI 3.14

int main() {
    int x;
    printf("Unesi vrijednost kuta x u stupnjevima: ");
    scanf("%d", &x);

    float theta = PI * x / 180.f;

    printf("Vrijednosti trigonometrijskih funkcija: \n");
    printf("   - sin(%d) = %f \n   - cos(%d) = %f \n   - tg(%d) = %f \n", x, sinf(theta), x, cosf(theta), x ,tanf(theta));
}