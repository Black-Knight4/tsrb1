#include <stdio.h>
#include <string.h>

void main() {
    char a[100];
    char word[100]; int j = 0;

    gets(a);
 
    int n;
    for (int i = 0; i < strlen(a); i++)
        if (a[i] == ' ') n = i;
 
    printf("druga rijec: ");

    int flag = 0;
    for (int i = n+1; i < strlen(a); i++) {
        word[j] = a[i]; 
        j++;
    }
    word[j] = '\0';
 
    printf("%s", word);
}

