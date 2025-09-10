#include <stdio.h>

int main() {
    float a, b, c, d, e, sum = 0, count = 0;
    printf("Upisi prvi cijeli ili realan broj: ");
    scanf("%f", &a);
    if (a == (int)a) {
        sum += a;
        count++;
    }

    printf("Upisi drugi cijeli ili realan broj: ");
    scanf("%f", &b);
    if (b == (int)b) {
        sum += b;
        count++;
    }

    printf("Upisi treci cijeli ili realan broj: ");
    scanf("%f", &c);
    if (c == (int)c) {
        sum += c;
        count++;
    }

    printf("Upisi cetvrti cijeli ili realan broj: ");
    scanf("%f", &d);
    if (d == (int)d) {
        sum += d;
        count++;
    }

    printf("Upisi peti cijeli ili realan broj: ");
    scanf("%f", &e);
    if (e == (int)e) {
        sum += e;
        count++;
    }


    printf("Aritmeticka sredina cijelih upisanih brojeva: %.2f\n", (float)sum / count);
}
