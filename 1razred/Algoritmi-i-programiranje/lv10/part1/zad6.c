#include <stdio.h>

int main() {
    int des, jed;

    printf("Brojevi sa parnim umnoskom znamenki:");

    for (int i = 30; i <= 40; i++) {
        des = i / 10;
        jed = i % 10;

        if ((jed * des) % 2 == 0) {
            printf(" %d", i);
        }
    }

    printf("\n");
}
