#include <stdio.h>
#include <ctype.h>

void main() {
    char a;

    printf("Upisi prvo malo slovo: ");
    scanf(" %c", &a);

    while (islower(a)) {
        printf("Veliko slovo: %c \n", toupper(a));

        printf("Upisi sljedece malo slovo: ");
        scanf(" %c", &a);
    }
}
