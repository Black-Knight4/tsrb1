#include <stdio.h>
#include <ctype.h>

void main() {
    char a[5];

    for (int i = 0; i < 5; i++) {
        printf("Unesi %d. znak: ", i+1);
        scanf(" %c", &a[i]);
    }

    int n_lower = 0;
    for (int i = 0; i < 5; i++) 
        if (islower(a[i])) n_lower++;

    if (n_lower > (5 - n_lower)) printf("Vise je malih slova.");
    else if (n_lower < (5 - n_lower)) printf("Vise je velikih slova.");
    else printf("Jednako je.");
}
