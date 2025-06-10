#include <stdio.h>

int main() {
    int br, jed, des, sto, umnozak;
    printf("Upisi broj: ");
    scanf("%d", &br);

    sto = br / 100;
    des = br % 100 / 10;
    jed = br % 10;

    umnozak = jed * des * sto;
    if (umnozak % 2 == 0) {
        printf("Umnozak znamenki je paran.");
    }
    else {
        printf("Umnozak znamenki je neparan.");
    }
}
