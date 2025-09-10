#include <stdio.h>

int main() {
    int num;
    printf("Upisi broj: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("Predhodnik broja %d je %d.\n", num, num - 1);
    }
    else if (num < 0) {
        printf("Slijedbenik broja %d je %d.\n", num, num + 1);
    }
    else {
        printf("Broj je nula.\n");
    }
}
