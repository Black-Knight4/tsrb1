#include <stdio.h>

void main() {
    int border1, border2, sum = 0, n = 0; // [border1, border2]
    /*
    Note:
    n = border2 - border1 + 1
    sum = (n / 2) * (border1 + border2) 
        = (border2 - border1 + 1) / 2 * (border1 + border2) 
        = ((border2 - border1 + 1) * (border1 + border2)) / 2

    from this follows: avg = (border1 + border2) / 2
    */

    printf("Unesi donju granicu: "); scanf("%d", &border1);
    printf("Unesi gornju granicu: "); scanf("%d", &border2);

    printf("\n\n\nsum: %d", ((border2 - border1 + 1) * (border1 + border2)) / 2);

    for (int i = border1; i <= border2; i++) {
        sum += i;
        n++;
    }

    float avg = sum / (float)n;
    printf("Aritmeticka sredina: %.2f", avg);

}
