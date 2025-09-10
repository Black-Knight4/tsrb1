#include <stdio.h>

int main() {
    int a, b, c;
    printf("Upisi prvi prirodan broj: ");
    scanf("%d", &a);
    printf("Upisi druig prirodan broj: ");
    scanf("%d", &b);
    printf("Upisi treci prirodan broj: ");
    scanf("%d", &c);

    if (a == b && b == c) {
        printf("Brojevi su isti\n");
    }
    else {
        if (a < b) {
            int temp = a;
            a = b;
            b = temp;
        }
        if (a < c) {
            int temp = a;
            a = c;
            c = temp;
        }
        if (b < c) {
            int temp = b;
            b = c;
            c = temp;
        }
        printf("Brojevi po redu: %d, %d, %d.\n", a, b, c);
    }
}
