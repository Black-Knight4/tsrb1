#include <stdio.h>

void main() {
    int a[5];
    int des[5];
    int jed[5];

    for (int i = 0; i < 5; i++) {
        printf("Unesi %d. broj: ", i+1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 5; i++) {
        des[i] = a[i] / 10;
        jed[i] = a[i] % 10;
    }

    printf("\nUpisani brojevi: ");
    for (int i = 0; i < 5; i++) 
        printf("%d ", a[i]);

    printf("\nZnamenke jedinica: ");
    for (int i = 0; i < 5; i++) 
        printf("%d ", jed[i]);
    
    printf("\nZnamenke desetica: ");
    for (int i = 0; i < 5; i++) 
        printf("%d ", des[i]);
}
