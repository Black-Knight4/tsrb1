#include <stdio.h>
 

void main() {
    int a;
 
    do {
        printf("enter num: ");
        scanf("%d", &a);
    } while (a <= 0 || (int)a != a);
 
 
    printf("deviders: ");
    for (int i = 1; i <= (a / 2); i++) {
        if (a % i == 0) printf("%d, ", i);
    }
 
    printf("%d", a);
}