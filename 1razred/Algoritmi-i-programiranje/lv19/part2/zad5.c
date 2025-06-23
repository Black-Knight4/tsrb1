#include <stdio.h>

void main() {
    char a1, a2, a3, a4;
    int h1, h2, h3, h4;

    printf("Upisi prvo slovo prezimena i visinu prvog ucenika: ");
    scanf(" %c %d", &a1, &h1);
    
    printf("Upisi prvo slovo prezimena i visinu drugog ucenika: ");
    scanf(" %c %d", &a2, &h2);

    printf("Upisi prvo slovo prezimena i visinu treceg ucenika: ");
    scanf(" %c %d", &a3, &h3);

    printf("Upisi prvo slovo prezimena i visinu cetvrtog ucenika: ");
    scanf(" %c %d", &a4, &h4);

    float avg = (h1 + h2 + h3 + h4) / 4.F;

    printf("ucenici visine od aritmeticke sredine: ");
    if (h1 > avg)
        printf("\n%c, visok %d", a1, h1);

    if (h2 > avg)
        printf("\n%c, visok %d", a2, h2);

    if (h3 > avg)
        printf("\n%c, visok %d", a3, h3);

    if (h4 > avg)
        printf("\n%c, visok %d", a4, h4);

}
