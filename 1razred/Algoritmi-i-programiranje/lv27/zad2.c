#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main() {
    char a[100];
    gets(a);

    int n = 0;
    for (int i = 0; i < strlen(a); i++)
        if (tolower(a[i]) == 'a' || tolower(a[i]) == 'e' || tolower(a[i]) == 'i' || tolower(a[i]) == 'o' || tolower(a[i]) == 'u') n++;
 
    printf("num: %d", n);
}

