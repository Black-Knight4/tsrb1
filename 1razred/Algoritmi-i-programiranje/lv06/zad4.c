#include <stdio.h>

int main() {
    float ocjena;
    printf("Upisi ocjenu: ");
    scanf("%f", &ocjena);

    if (ocjena == (int)ocjena && ocjena <= 5 && ocjena >= 1) {
        if (ocjena == 1) {
            printf("Ocjena je nedovoljan.\n");
        }
        else if (ocjena == 2) {
            printf("Ocjena je dovoljan.\n");
        }
        else if (ocjena == 3) {
            printf("Ocjena je dobar.\n");
        }
        else if (ocjena == 4) {
            printf("Ocjena je vrlo dobar.\n");
        }
        else if (ocjena == 5) {
            printf("Ocjena je odlican.\n");
        }
    }
    else {
        printf("Ocjena nije ispravna.\n");
    }
}
