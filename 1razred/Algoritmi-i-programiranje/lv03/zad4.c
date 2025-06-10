#include <stdio.h>

int main() {
	float rl, dec;
	int wh;
	printf("Upisi realan broj: ");
	scanf("%f", &rl);

	wh = (int)rl;
	dec = rl - wh;

	printf("Cijeli dio broja: %d\n", wh);
	printf("Decimalni dio broja: %f\n", dec);
}
