#include <stdio.h>
#include <math.h>
int main() {
    int ucenika = 28, engleski, njemacki, talijanski;

    engleski = (int)roundf(ucenika * 0.73f);
    njemacki = (int)roundf(ucenika * 0.18f);
    talijanski = (int)roundf(ucenika * 0.09f);

    printf("Ucenika u razredu: %d\n", ucenika);
    printf("Englseki jezik: %d\n", engleski);
    printf("Njemacki jezik: %d\n", njemacki);
    printf("Talijanski jezik: %d\n", talijanski);
}
