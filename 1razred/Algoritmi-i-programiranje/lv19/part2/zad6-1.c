#include <stdio.h>

void main() {
    char a1, a2, a3;

    printf("Upisi prvi znak: ");
    scanf(" %c", &a1);
    
    printf("Upisi drugi znak: ");
    scanf(" %c", &a2);

    printf("Upisi treci znak: ");
    scanf(" %c", &a3);
    
    int sum = 0, n = 0;
    if (a1 >= 48 && a1 <= 57) {
        sum += a1 - '0'; // = a1 - 48 = (int)a1
        n++;
    }
    if (a2 >= 48 && a2 <= 57) {
        sum += (int)a2;
        n++;
    }
    if (a3 >= 48 && a3 <= 57) {
        sum += a3 - 48;
        n++;
    }

    if (n == 0) {
        printf("Nije upisan niti jedan znak-znamenka.");
        return;
    }

    float avg = sum / (float)n;
    printf("Aritmeticka sredina upisanih znakova-znamneki iznosi %.2f", avg);

}
