#include <stdio.h>
#include <math.h>
#define PI 3.14


void main() {
    int angle;

    printf("enter angle in degrees: ");
    scanf("%d",  &angle);

    float rad = angle * PI / 180;

    char trig;
    printf("chose trig: ");
    scanf(" %c", &trig);

    switch (trig) {
    case 's':
        printf("sin(%d) = %f", angle, sinf(rad));
        break;

    case 'c':
        printf("cos(%d) = %f", angle, cosf(rad));
        break;

    case 't':
        printf("tan(%d) = %f", angle, tanf(rad));
        break;

    default:
        printf("invalid trig function");
        break;
    }
}