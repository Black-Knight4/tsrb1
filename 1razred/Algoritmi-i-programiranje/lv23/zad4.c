#include <stdio.h>
#include <ctype.h>

void main() {
    char a;
    int n_upper, n_lower;

    printf("Upisi prvo slovo: ");
    scanf(" %c", &a);

    while (isalpha(a)) {
        if (isupper(a)) n_upper++;
        else n_lower++;

        printf("Upisi sljedece slovo: ");
        scanf(" %c", &a);
    }

    if (n_lower > n_upper) printf("Vise je malih.");
    else if (n_lower < n_upper) printf("Vise je velikih");
    else printf("Jednako je");
}
