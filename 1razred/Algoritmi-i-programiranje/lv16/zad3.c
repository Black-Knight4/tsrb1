#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    
    int num = rand() % 100 + 1;
    float root;
    int square, cube;
    root = sqrtf(num);
    square = pow(num, 2);
    cube = pow(num, 3);

    printf("Korijen broja %d je %.2f\n", num, root);
    printf("Kvadrat broja %d je %d\n", num, square);
    printf("Kub broja %d je %d\n", num, cube);
}
