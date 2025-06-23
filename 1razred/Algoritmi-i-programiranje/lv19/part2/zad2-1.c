#include <stdio.h>

void main() {
    char a;

    printf("Upisi znak: ");
    scanf(" %c", &a);

    // use the table
    /*
    digits => 48 - 57
    upper => 65 - 90
    lower => 97 - 122
    special char => else
    */
   
    if (a >= 48 && a <= 57) // a >= '0' && a <= '9'
        printf("Upisana je znamenka");
    else if (a >= 65 && a <= 90) // a >= 'A' && a <= 'Z'
        printf("Upisano je veliko slovo");
    else if (a >= 97 && a <= 122) // a >= 'a' && a <= 'z'
        printf("Upisano je malo slovo");
    else
        printf("Upisan je specijalni znak");
    
}
