#include <stdio.h>


void main() {
    int a[5], sum = 0, n = 0;
    
    for (int i = 0; i < 5; i++) {
        printf("enter %d. num: ", i + 1);
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0) { 
            sum += a[i];
            n++;
        }
    }

    float avg = (float)sum / n;
    printf("avg of even: %.2f", avg);

    printf("\nless than avg: ");
    for (int i = 0; i < 5; i++) {
        if (a[i] < avg) printf("%d, ", a[i]);
    }
}
