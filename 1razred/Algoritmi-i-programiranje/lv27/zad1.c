#include <stdio.h>
#include <string.h>
 
void main() {
    char a[100];
    gets(a); // use fgets instead to avoid buffer overflow (if you are in 1st grade this might not be important to you (yet)) -->> fgets(a, sizeof(a), stdin);
 
    int len;
    for (int i = 0; i < 100; i++) {
        if (a[i] == '\0') { 
            len = i;
            break;
        }
    }
 
    printf("%s, len = %d", a, len);
}
