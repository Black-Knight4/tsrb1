#include <stdio.h>
#include <math.h>

int main() {
    float input, korijen;
    printf("Upisi broj: ");
    scanf("%f", &input);

    if (input <= 0.f) {
        printf("Ne postoji realan korijen iz ucitanog broja.");
    }
    else {
        korijen = sqrtf(input);
        printf("Drugi korijen iz broja: %f", korijen);
    }
}
