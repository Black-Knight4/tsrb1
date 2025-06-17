#include <stdio.h>

int main() {
    int a = 1, b = 2, zbroj, razlika, umnozak;
    float kvocijent;

    zbroj = a + b;
    razlika = a - b;
    umnozak = a * b;
    kvocijent = a / (float)b;

    printf("a\tb\tzbroj\trazlika\tumnozak\tkvocijent\n"); // \t is the tab character
    printf("---------------------------------------------------------------------------\n");
    printf("%d\t%d\t%d\t%d\t%d\t%f\n", a, b, zbroj, razlika, umnozak, kvocijent);
}