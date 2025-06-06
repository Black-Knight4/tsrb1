#include <stdio.h>

void main() {
    int a[3][4];

    for (int i = 0; i < 3; i++) {
        printf("enter %d. row: ", i+1);

        for (int j = 0; j < 4; j++) scanf("%d", &a[i][j]);
    }

    for (int i = 0; i < 3; i++) {
        int sum = 0;

        for (int j = 0; j < 4; j++) sum += a[i][j];

        float avg = sum / 4.f;
        printf("\navg of %d. row is %.2f", i+1, avg);
    }
    
    printf("\n");
}
