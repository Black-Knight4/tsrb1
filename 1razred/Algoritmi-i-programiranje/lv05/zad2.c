#include <stdio.h>

int main() {
    float num;
    printf("Upisi broj: ");
    scanf("%f", &num);

    if (num == (int)num) {
        if (num > 0) {
            printf("Broj je prirodan.");
        }
        else if(num < 0) {
            printf("Broj je negativan cijeli.");
        }
        else {
            printf("Broj je realan.");
        }
    }
    else {
        printf("Broj je realan.");
    }
}
