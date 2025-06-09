#include <stdio.h>
#include <ctype.h>


void main() {
    char a;
    do {
        printf("upisi znak: ");
        scanf(" %c", &a);
    } while (isalpha(a));
 
    int a_ = a - 48;
 
    for (int i = 2; i <= (a_ / 2); i++) {
        if (a_ % i == 0) {
            printf("nije prim");
            return;
        }
    }
 
    printf("prim je");
}
