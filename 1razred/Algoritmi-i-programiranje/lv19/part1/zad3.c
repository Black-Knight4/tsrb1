#include <stdio.h>

void main() {
    float a, b;

    printf("enter two numbers: ");
    scanf("%f %f",  &a, &b);

    char op;
    printf("chose operation: ");
    scanf(" %c", &op);

    switch (op) {
    case '+':
        printf("%f + %f = %f", a, b, a + b);
        break;

    case '-':
        printf("%f - %f = %f", a, b, a - b);
        break;

    case '*':
        printf("%f * %f = %f", a, b, a * b);
        break;
    
    case '/':
        printf("%f / %f = %f", a, b, a / b);
        break;

    default:
        printf("invalid operation");
        break;
    }
}