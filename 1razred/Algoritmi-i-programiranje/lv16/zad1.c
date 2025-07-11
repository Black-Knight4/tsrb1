#include <stdio.h>

int main() {
    int br, jed, des, sto, um;
    printf("Upisi troznamenkasti cijeli broj: ");
    scanf("%d", &br);

    sto = br / 100;
    des = br % 100 / 10;
    jed = br % 10;

    um = jed * des * sto;
    printf("Umnozak znamenaka %d, %d i %d iznosi %d.\n", sto, des, jed, um);
}
