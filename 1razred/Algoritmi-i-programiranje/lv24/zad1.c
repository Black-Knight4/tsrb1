#include <stdio.h>
#include <ctype.h>


void main() {
    char a;
 
    do {
        printf("Upisi slovo: ");
        scanf(" %c", &a);
    } while (!isalpha(a));
 
    if (isupper(a)) {
        printf("Slovo %c nije malo slovo.", a);
    }
    else {
        printf("Slovo %c je malo slovo.", a);
    }
}
