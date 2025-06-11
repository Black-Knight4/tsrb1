#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main() {
    char a[100];
    gets(a);
 
    for (int i = 1; i < strlen(a); i++) {
        if (a[i] == ' ') {
            if (tolower(a[i+1]) == 'a')
                printf("Druga rijec pocinje slovom a");
            else
                printf("Druga rijec ne pocinje slovom a");
            
            break;
        }
    }
}
