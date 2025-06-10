#include <stdio.h>

void main() {
    float a;

    printf("enter num: ");
    scanf("%f", &a);

    if ((int)a == a) {
        printf("the number isnt decimal");
        return;
    }

    char choice;
    printf("chose what to print \nc - whole part of the number \nd - decimal part of the number \n");
    scanf(" %c", &choice);

    switch (choice) {
    case 'c':
        printf("whole part: %d", (int)a);
        break;
    
    case 'd':
        printf("decimal part: %f", a - (int)a);
        break;
    
    default:
        printf("invalid choice");
        break;
    }
}