#include <stdio.h>

int main() {
    int r1, r2, rp, rs;
    printf("Upisi pozitivnu vrijednost otpora prvog otpornika: ");
    scanf("%d", &r1);
    printf("Upisi pozitivnu vrijednost otpora drugog otpornika: ");
    scanf("%d", &r2);

    if (!(r1 > 0) || !(r2 > 0)) {
        printf("Vrijednosti otpora oba otpornika nisu pozitivne.\n");
    }
    else {
        rs = r1 + r2;
        rp = (r1 * r2) / (r1 + r2);
        printf("Otpor serijskoga spoja otpornika: %d Ohma\n", rs);
        printf("Otpor paralelnoga spoja otpornika: %d Ohma\n", rp);
    }
}
