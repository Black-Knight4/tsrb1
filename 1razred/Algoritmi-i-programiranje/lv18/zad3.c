#include <stdio.h>

int main() {
    int year;
    printf("Upisi godinu: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("Godina je prestupna.\n");
            }
            else {
                printf("Godina nije prestupna.\n");
            }
        }
        else {
            printf("Godina je prestupna.\n");
        }
    }
    else {
        printf("Godina nije prestupna.\n");
    }
}
