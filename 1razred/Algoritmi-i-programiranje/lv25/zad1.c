#include <stdio.h>
#include <ctype.h>

void main() {
    int n_lower = 0;

    for (int i = 0; i < 5; i++) {
        char a;
        printf("Upisi %d. slovo: ", i+1);
        scanf(" %c", &a);
        
        if (islower(a)) n_lower++;
    }

    printf("Malih slova: %d", n_lower);
}
