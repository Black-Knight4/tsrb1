#include <stdio.h>
#include <math.h>

int main() {
    float a;
    printf("Unesi duljinu stranice kocke: ");
    scanf("%f", &a);

    float v = pow(a, 3);
    float area = 6 * pow(a, 2);
    float diagonal = a * pow(2, 0.5);

    printf("Volumen: %.2f \nPovrsina: %.2f \nDijagonala stranice: %.2f \n", v, area, diagonal);
}