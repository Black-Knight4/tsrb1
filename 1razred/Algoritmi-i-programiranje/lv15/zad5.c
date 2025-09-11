#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    
    int a1, a2, a3;

    a1 = rand() % 5 + 1;
    a2 = rand() % 5 + 1;
    a3 = rand() % 5 + 1;

    float avg = (a1 + a2 + a3) / 3.f;

    printf("Tri slučajne generirane ocjene: %d %d %d \n", a1, a2, a3);
    printf("Prosjecna ocjena: %.2f \n", avg);
}