#include <stdio.h>
#include <math.h>

void main() {
    float a;

    printf("Upisi prvi broj: ");
    scanf("%f", &a);

    while (a != 0) {
        printf("Drugi korjen iz %.2f je %.2f \n", a, sqrtf(a));

        printf("Upisi sljedeci broj: ");
        scanf("%f", &a);
    }

    printf("Kraj");
}