#include <stdio.h>
#include <ctype.h>

void main() {
    char a;

    printf("Unesi prvo malo slovo: ");
    scanf(" %c", &a);

    while (islower(a)) {
        printf("Veliko slovo: %c", toupper(a));

        printf("\nUnesi sljedece malo slovo: ");
        scanf(" %c", &a);
    }
    
    printf("Kraj.");
}
