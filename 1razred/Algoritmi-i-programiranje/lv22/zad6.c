#include <stdio.h>
#include <ctype.h>

void main() {
    char a;
    int n_lower = 0;

    for (int i = 1; i <= 5; i++) {
        printf("unesi %d. znak: ", i);
        scanf(" %c", &a);

        if (islower(a)) n_lower++;
    }

    printf("upisano malih slova: %d", n_lower);
}
