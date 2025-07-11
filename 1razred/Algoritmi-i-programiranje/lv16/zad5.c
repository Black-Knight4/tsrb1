#include <stdio.h>

int main() {
    int t, s;
    float v;
    printf("Unesi vrijeme u minutama i kilometre: ");
    scanf("%d %d", &t, &s);
    v = s / (t / 60.0f);
    printf("%.2f\n", v);
}
