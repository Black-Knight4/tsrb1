#include <stdio.h>

void main() {
    float a;
    int sum = 0;

    for (int i = 1; i <= 5; i++) {
        printf("unesi %d. realni broj: ", i);
        scanf("%f", &a);

        float num = a * 100;
        sum += (int)num % 10;
    }

    printf("zbroj znamenki stotinke: %d", sum);
}
