#include <stdio.h>
#include <ctype.h>


void main() {
    char a;
    do {
        printf("Upisi znak-znamenku: ");
        scanf(" %c", &a);
    } while (!isdigit(a));
 
    int br = a - 48;
 
    for (int i = 2; i <= (br / 2); i++) {
        if (br % i == 0) {
            printf("Broj %d nijie prim.", br);
            return;
        }
    }
 
    printf("Broj %d je prim.", br);
}
