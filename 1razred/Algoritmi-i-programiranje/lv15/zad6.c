#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    srand(time(NULL));
    
    float t1, t2, t3, t4;
    t2 = rand() % 16;

    printf("Unesi koliko ti treba do stanice: ");
    scanf("%f", &t1);

    printf("Unesi koliko tramvaju treba do škole: ");
    scanf("%f", &t3);

    printf("Unesi koliko ti treba od stanice do škole: ");
    scanf("%f", &t4);

    int t_total = ceilf(t1) + t2 + ceil(t3) + ceil(t4);

    printf("Sveukupno ti otprilike treba %d minuta \n", t_total);
}