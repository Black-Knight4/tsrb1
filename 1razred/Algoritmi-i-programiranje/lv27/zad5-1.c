#include <stdio.h>
#include <string.h>

void main() {
    char a[100];
    gets(a);
 
    printf("druga rijec: ");

    int flag = 0;
    for (int i = 1; i < strlen(a); i++) {
        if (flag) printf("%c", a[i]);
 
        if (a[i] == ' ') {
            if (flag == 1) break;
            else flag = 1;
        }
    }

}

