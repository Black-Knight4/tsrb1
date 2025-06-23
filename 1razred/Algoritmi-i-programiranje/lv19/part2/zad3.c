#include <stdio.h>

void main() {
    char a;

    printf("Upisi slovo: ");
    scanf(" %c", &a);
    
    printf("Prethodna cetiri slova su: ");
    printf("%c, %c, %c, %c", a-1, a-2, a-3, a-4);
}
