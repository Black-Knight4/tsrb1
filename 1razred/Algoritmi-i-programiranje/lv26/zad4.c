#include <stdio.h>

void main() {
    int a[5];
    int even[5], j = 0;
    int uneven[5], k = 0;
    
    for (int i = 0; i < 5; i++) {
        printf("enter %d. num: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (a[i] % 2 == 0) {
            even[j] = a[i];
            j++;
        } else {
            uneven[k] = a[i];
            k++;
        }
    }

    printf("even: ");
    for (int i = 0; i < j; i++) printf("%d, ", even[i]);

    printf("\nuneven: ");
    for (int i = 0; i < k; i++) printf("%d, ", uneven[i]);
}