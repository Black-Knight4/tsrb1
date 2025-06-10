#include <stdio.h>
#include <ctype.h>


void main() {
    char a[5];

    for (int i = 0; i < 5; i++) {
        printf("enter %d. char: ", i + 1);
        scanf(" %c", &a[i]);
    }

    int letters = 0;
    int digits = 0;
    for (int i = 0; i < 5; i++) {
        if (isalpha(a[i])) letters++;
        else digits++;
    }

    if (letters > digits) printf("more letters");
    else if (letters < digits) printf("more digits");
    else printf("equal");
}
