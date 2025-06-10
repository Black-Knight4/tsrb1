#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    int num1, num2, num3, num4;
    srand(time(NULL));

    num1 = rand() % 6 + 1;
    num2 = rand() % 6 + 1;
    num3 = rand() % 6 + 1;
    num4 = rand() % 6 + 1;

    printf("Prvi slucajni broj: %d\n", num1);
    printf("Prvi slucajni broj: %d\n", num2);
    printf("Prvi slucajni broj: %d\n", num3);
    printf("Prvi slucajni broj: %d\n", num4);
    printf("Najveci slucajni broj: %d\n", (int)fmax(fmax(num1, num2), fmax(num3, num4)));
}
