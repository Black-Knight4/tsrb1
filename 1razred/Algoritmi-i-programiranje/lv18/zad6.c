#include <stdio.h>

int main() {
    int a, b, c, d, e;
    printf("Upisi prvi broj: ");
    scanf("%d", &a);
    printf("Upisi drugi broj: ");
    scanf("%d", &b);
    printf("Upisi treci broj: ");
    scanf("%d", &c);
    printf("Upisi cetvrti broj: ");
    scanf("%d", &d);
    printf("Upisi peti broj: ");
    scanf("%d", &e);

    if (a == b || a == c || a == d || a == e ||
        b == c || b == d || b == e ||
        c == d || c == e ||
        d == e) {
        printf("Medju ucitanum brojevima ima jednakih\n");
    }
    else {
        printf("Medju ucitanim brojevima nema jednakih.\n");
    }
}
