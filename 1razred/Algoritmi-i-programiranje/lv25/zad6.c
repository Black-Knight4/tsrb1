#include <stdio.h>
#include <ctype.h>


void main() {
    int a;
    do {
        printf("Upisi prirodni broj: ");
        scanf("%d", &a);
    } while (a <= 0);

    printf("Djelitelji broja: 1 ");
    for (int i = 2; i <= (a / 2); i++) {
        if (a % i == 0) 
            printf("%d ", i);
    }

    printf("8");
}
