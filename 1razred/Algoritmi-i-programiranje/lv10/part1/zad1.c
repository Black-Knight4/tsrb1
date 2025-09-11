#include <stdio.h>

int main() {
    int count = 0;
    
    for (int i = 0; i < 5; i++) {
        float num;
        printf("Upisi %d. realan broj: ", i + 1);
        scanf("%f", &num);
        while (num == (int)num) {
            printf("Upisi %d. realan broj: ", i + 1);
            scanf("%f", &num);
        }

        if ((int)num % 2 == 0) {
            count++;
        }
    }

    printf("Brojeva sa parnim cijelim dijelom: %d\n", count);
}
