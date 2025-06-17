#include <stdio.h>

int main() {
    int num = 345;
    int sto, des, jed, zbroj, umnozak;
    sto = num / 100;
    des = num % 100 / 10;
    jed = num % 10;

    zbroj = sto + des + jed;
    umnozak = sto * des * jed;

    printf("Za troznamenkasti cijeli broj %d:\n", num);
    printf(" - zbroj znamenki: %d\n", zbroj);
    printf(" - umnozak znamenki: %d\n", umnozak);
}