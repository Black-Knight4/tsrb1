#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    printf("Upisi duljine triju duzina: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (abs(a - b) < c)) {
        printf("Duzine duljina %d, %d i %d mogu ciniti trokut.\n", a, b, c);
    }
    else {
        printf("Duzine duljina %d, %d i %d ne mogu ciniti trokut.\n", a, b, c);
    }
}
