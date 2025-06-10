#include <stdio.h>

int main() {
    float br;
    printf("Upisi pozitivan realan broj: ");
    scanf("%f", &br);

    if (br < 0) {
        printf("Broj %f nije pozitivan.\n", br);
    }
    else {
        if ((int)br % 2 == 0) {
            printf("Cijeli dio broja %f je paran.\n", br);
        }
        else {
            printf("Cijeli dio broja %f nije paran.\n", br);
        }
    }
}
