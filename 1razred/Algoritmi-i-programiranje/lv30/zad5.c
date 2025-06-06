#include <stdio.h>

void main() {
    int a[3][4];

    for (int i = 0; i < 3; i++) {
        printf("enter %d. row: ", i+1);

        for (int j = 0; j < 4; j++) scanf("%d", &a[i][j]);
    }

    for (int i = 0; i < 3; i++) {
        int max = a[i][0];

        for (int j = 1; j < 4; j++) {
            if (a[i][j] > max) max = a[i][j];
        }


        printf("\nmax value of %d. row is %d", i+1, max);
    }
    printf("\n");

    for (int i = 0; i < 3; i++) {
        int min = a[i][0];

        for (int j = 1; j < 4; j++) {
            if (a[i][j] < min) min = a[i][j];
        }


        printf("\nmin value of %d. row is %d", i+1, min);
    }
    printf("\n");
}
