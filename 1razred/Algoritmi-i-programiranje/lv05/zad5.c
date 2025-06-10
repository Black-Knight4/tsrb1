#include <stdio.h>

int main() {
    float br1, br2, br3, min;
    printf("Upisi prvi broj: ");
    scanf("%f", &br1);

    printf("Upisi prvi broj: ");
    scanf("%f", &br2);

    printf("Upisi prvi broj: ");
    scanf("%f", &br3);

    if (br1 - (int)br1 < br2 - (int)br2) {
        min = br1;
    }
    else {
        min = br2;
    }

    if (br3 - (int)br3 < min - (int)min) {
        min = br3;
    }

    printf("Broj sa najmanjim cijelim dijelom: %f", min);
}
