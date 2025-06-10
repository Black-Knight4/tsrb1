#include <stdio.h>


void main() {
    float a;

    do {
        printf("Upisi prirodan broj: ");
        scanf("%f", &a);
    } while (a != (int)a || a <= 0);

    if ((int)a % 2 == 0) {
        printf("Broj %d je paran.", a);
    }
    else {
        printf("Broj %d je neparan.", a);
    }
}
