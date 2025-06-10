#include <stdio.h>

void main() {
    int a, b, c;

    printf("enter three nums: ");
    scanf("%d %d %d", &a, &b, &c);

    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    int mid = a;
    if ((a < b && b < c) || (c < b && b < a)) mid = b;
    if ((a < c && c < b) || (b < c && c < a)) mid = c;
    
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    int choice;
    printf("chose how to sort the numbers \n1 - smallest to greatest \n2 - greatest to smallest \n");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
        printf("%d, %d, %d", min, mid, max);
        break;
    
    case 2:
        printf("%d, %d, %d", max, mid, min);
        break;
    
    default:
        printf("invalid choice");
        break;
    }
}