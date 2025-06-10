#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, num3, min, med, max;
    printf("Upisi prvi realan broj: ");
    scanf("%f", &num1);

    printf("Upisi prvi realan broj: ");
    scanf("%f", &num2);

    printf("Upisi prvi realan broj: ");
    scanf("%f", &num3);

    num1 = num1 - (int)num1;
    num2 = num2 - (int)num2;
    num3 = num3 - (int)num3;

    min = fminf(num1, fminf(num2, num3));
    max = fmaxf(num1, fmaxf(num2, num3));
    med = num1 + num2 + num3 - min - max;
    
    printf("Decimalni dijelovi ucitanih bojeva poredani od najmanjeg do najveceg: \n");
    printf("%f\n", min);
    printf("%f\n", med);
    printf("%f\n", max);
}
