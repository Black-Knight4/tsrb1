#include <stdio.h>

int main() {
    float num, min;
    printf("Upisi prvi realan broj: ");
    scanf("%f", &min);

    printf("Upisi drugi realan broj: ");
    scanf("%f", &num);
    if (num - (int)num < min - (int)min) {
        min = num;
    }

    printf("Upisi treci realan broj: ");
    scanf("%f", &num);
    if (num - (int)num < min - (int)min) {
        min = num;
    }

    printf("Upisi cetvrti realan broj: ");
    scanf("%f", &num);
    if (num - (int)num < min - (int)min) {
        min = num;
    }

    printf("Upisi peti realan broj: ");
    scanf("%f", &num);
    if (num - (int)num < min - (int)min) {
        min = num;
    }


    printf("Broj sa najmanjim decimalnim dijelom: %.3f\n", min);
}
