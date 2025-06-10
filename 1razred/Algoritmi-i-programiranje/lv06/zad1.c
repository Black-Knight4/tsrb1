#include <stdio.h>

int main() {
    float num;
    printf("Upisi broj: ");
    scanf("%f", &num);

    if (num == (int)num) {
        if (num > 0) {
            printf("Broj %f je prirodan.\n", num);
        }
        else if (num < 0) {
            printf("Broj %f je negativan cijeli.\n", num);
        }
        else {
            printf("Broj %f je realan.\n", num);
        }
    }
    else {
        printf("Broj %f je realan.\n", num);
    }
}
