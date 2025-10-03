#include <stdio.h>

int main() {
    float num;

    do {
        printf("Unesi prirodan broj: ");
        scanf("%f", &num);
    } while ((int)num != num || num <= 0);

    int n = num;
    int tmp = n;

    int digits = 0;
    while(n != 0) {
        n /= 10;
        digits++;
    }

    n = tmp;

    printf("znamenke: ");
    for (int i = digits-1; i >= 0; i--) {
        int weight = 1;
        for (int _ = 1; _ <= i; _++) // just does pow(10, i) (but with INTs)
            weight *= 10;

        printf("%d ", n / weight);
        n %= weight;
    }
}