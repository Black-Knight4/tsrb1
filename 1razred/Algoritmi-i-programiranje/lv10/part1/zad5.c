#include <stdio.h>

int main() {
    float num;
    printf("Upisi realan broj: ");
    scanf("%f", &num);
    while (num == (int)num) {
        printf("Upisi realan broj: ");
        scanf("%f", &num);
    }

    int whole = (int)num;
    int prime = 1;
    for (int i = 2; i < whole - 1; i++) {
        if (whole % i == 0) {
            prime = 0;
            break;
        }
    }

    if (prime) {
        printf("Cijeli dio broja %.2f je prim.", num);
    }
    else {
        printf("Cijeli dio broja %.2f nije prim.", num);
    }
}
