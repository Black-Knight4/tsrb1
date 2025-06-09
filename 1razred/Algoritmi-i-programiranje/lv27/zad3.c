#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main() {
    // sm - samoglasnici
    // su - suglasnici
    
    char a[100];
    gets(a);
 
    int n_sm = 0;
    for (int i = 0; i < strlen(a); i++)
        if (tolower(a[i]) == 'a' || tolower(a[i]) == 'e' || tolower(a[i]) == 'i' || tolower(a[i]) == 'o' || tolower(a[i]) == 'u') n_sm++;

    int n_su = strlen(a) - n_sm;
 
    if (n_sm > n_su) printf("vise je samoglasnika");
    else if (n_sm < n_su) printf("vise je suglasnika");
    else printf("jednako je");
}

