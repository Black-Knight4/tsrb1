#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c, beta;
	printf("Upisi duljinu katete a: ");
	scanf("%f", &a);

	printf("Upisi vrijednost kuta B u stupnjevima: ");
	scanf("%f", &beta);
	beta = beta * M_PI / 180.f;

	b = tanf(beta) * a;
	c = a / cos(beta);
	printf("Duljina hipotenuze: %f\n", c);
	printf("Duljina katete b: %f\n", b);
}
