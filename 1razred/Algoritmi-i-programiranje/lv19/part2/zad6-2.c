#include <stdio.h>
#include <ctype.h>

void main() {
    char a1, a2, a3;

    printf("Upisi prvi znak: ");
    scanf(" %c", &a1);
    
    printf("Upisi drugi znak: ");
    scanf(" %c", &a2);

    printf("Upisi treci znak: ");
    scanf(" %c", &a3);
    

    int sum = 0, n = 0;
    if (isdigit(a1)) {
        sum += a1 - '0'; // = a1 - 48 = (int)a1
        n++;
    }
    if (isdigit(a2)) {
        sum += a2 - 48;
        n++;
    }
    if (isdigit(a3)) {
        sum += (int)a3;
        n++;
    }

    if (n == 0) {
        printf("Nije upisan niti jedan znak-znamenka.");
        return;
    }

    float avg = sum / (float)n;
    printf("Aritmeticka sredina upisanih znakova-znamneki iznosi %.2f", avg);

}
