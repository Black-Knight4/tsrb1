#include <stdio.h>

void main() {
    int a[5], n;

    for (int i = 0; i < 4; i++) {
        printf("enter num: ");
        scanf("%d", &a[i]);
    }

    printf("enter extra num: ");
    scanf("%d", &a[4]);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (a[j] > a[i]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    
    for (int i = 0; i < 5; i++)
        printf("%d, ", a[i]);
}