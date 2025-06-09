#include <stdio.h>
#include <string.h>

void main() {
    char a[100];
    gets(a);
 
    int n;
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] == ' ') n = i;
    }
 
    printf("druga rijec: ");

    int flag = 0;
    for (int i = n+1; i < strlen(a); i++)
        printf("%c", a[i]);
}

