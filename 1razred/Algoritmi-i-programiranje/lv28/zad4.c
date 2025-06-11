#include <stdio.h>
#include <string.h>

void main() {
    char a[3][32];

    for (int i = 0; i < 3; i++) {
        printf("Unesi %d. rijec: ", i+1);
        gets(a[i]);
    }

    int len[3];
    for (int i = 0; i < 3; i++)
        len[i] = strlen(a[i]);
    
    int max = len[0];
    for (int i = 1; i < 3; i++) 
        if (len[i] > max) max = len[i];

    printf("broj slova najdulje rijeci: %d", max);
}
