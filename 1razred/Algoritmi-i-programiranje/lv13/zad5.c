#include <stdio.h>

int main() {
	int aX = 1, aY = 1, bX = 2, bY = 1, cX = 2, cY = 2, dX = 1, dY = 2, a;
	printf("Za pravilni cetverokut sa koordinatama vrhova:\n");
	printf(" - A: %d %d\n", aX, aY);
	printf(" - B: %d %d\n", bX, bY);
	printf(" - C: %d %d\n", cX, cY);
	printf(" - D: %d %d\n", dX, dY);

	a = bX - aX;
	printf("Povrsina pravilnoga iznosi: %d cm2\n", a * a);
}
