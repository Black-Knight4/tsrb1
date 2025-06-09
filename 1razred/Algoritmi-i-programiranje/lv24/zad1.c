#include <stdio.h>
#include <ctype.h>


void main() {
    char a;
 
    do {
        printf("enter char: ");
        scanf(" %c", &a);
    } while (!isalpha(a));
 
    if (isupper(a)) printf("upper");
    else printf("lower");
}
