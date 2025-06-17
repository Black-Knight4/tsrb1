#include <stdio.h>

int main() {
    int kun = 48, des, pet, dva, jed;

    printf("u %d kuna ima:\n", kun);

    des = kun / 10;
    kun = kun % 10;
    pet = kun / 5;
    kun = kun % 5;
    dva = kun / 2;
    jed = kun % 2;

    printf(" - novcanica od 10 kn: %d\n", des);
    printf(" - novcanica od 5 kn: %d\n", pet);
    printf(" - novcanica od 2 kn: %d\n", dva);
    printf(" - novcanica od 1 kn: %d\n", jed);
}