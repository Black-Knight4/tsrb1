#include <stdio.h>

int main() {
    float num;

    do {
        printf("Unesi prirodan broj: ");
        scanf("%f", &num);
    } while ((int)num != num || num <= 0);

    int n = num;
    int rev = 0;

    while(n != 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    while (rev != 0) {
        printf("%d ", rev % 10);
        rev /= 10;
    }
}