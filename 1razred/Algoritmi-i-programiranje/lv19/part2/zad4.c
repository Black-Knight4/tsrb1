#include <stdio.h>

void main() {
    char a, b, c;

    printf("Upisi 1. slovo: ");
    scanf(" %c", &a);
    
    printf("Upisi 2. slovo: ");
    scanf(" %c", &b);

    printf("Upisi 3. slovo: ");
    scanf(" %c", &c);

    char first = a;
    if (b < first) first = b;
    if (c < first) first = c;

    char last = a;
    if (b > last) last = b;
    if (c > last) last = c;

    char mid = a;
    if ((c < b && b < a) || (a < b && b < c)) mid = b; // b between c & a || b between a & c  =>  b elem <c, a> or b elem <a, c>
    if ((a < c && c < b) || (b < c && c < a)) mid = c;

    // char mid = (a + b + c) - (first + last);

    printf("Poredano po abecedi: %c %c %c", first, mid, last);
}
