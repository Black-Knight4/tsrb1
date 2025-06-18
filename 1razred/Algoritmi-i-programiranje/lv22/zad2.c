#include <stdio.h>

void main() {
    float a;
    int even = 0;

    for (int i = 1; i <= 5; i++) {
        printf("unesi %d. cijeli broj: ", i);
        scanf("%f", &a);

        if ((int)a == a && (int)a % 2 == 0) even++;
    }

    printf("parnih brojeva: %d", even);
}
