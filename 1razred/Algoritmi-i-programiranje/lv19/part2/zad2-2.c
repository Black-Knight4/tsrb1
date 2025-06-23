#include <stdio.h>
#include <ctype.h>

void main() {
    char a;

    printf("Upisi znak: ");
    scanf(" %c", &a);
    
    if (isdigit(a))
        printf("Upisana je znamenka");
    else if (isupper(a))
        printf("Upisano je veliko slovo");
    else if (islower(a))
        printf("Upisano je malo slovo");
    else
        printf("Upisan je specijalni znak");
    
}
