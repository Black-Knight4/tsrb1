#include <stdio.h>

void main() {
    float a;

    printf("Upisi prvi prirodni broj: ");
    scanf("%f", &a);

    while ((int)a == a) {
        if ((int)a % 2 == 0) 
            printf("Broj %.0f je paran. \n", a);
        else 
            printf("Broj %.0f nije paran. \n", a);

        printf("Upisi sljedeci prirodni broj: ");
        scanf("%f", &a);
    }
}