#include <stdio.h>

int main() {
    float largest, num;
    int count = 1;

    printf("Upisi 1. broj: ");
    scanf("%f", &num);
    largest = num;
    while (num != 0) {
        count++;
        printf("Upisi %d. broj: ", count);
        scanf("%f", &num);
        if (num > largest) {
            largest = num;
        }
    }

    printf("Najveci upisani realan broj: %.1f\n", largest);
}
