#include <stdio.h>

int main() {
	int aX, aY, bX, bY, cX, cY, dX, dY, a;
	printf("Upisi koordinate vrhova pravilnoga cetverokuta u cm:\n");
	printf(" - A: ");
	scanf("%d %d", &aX, &aY);
	printf(" - B: ");
	scanf("%d %d", &bX, &bY);
	printf(" - C: ");
	scanf("%d %d", &cX, &cY);
	printf(" - D: ");
	scanf("%d %d", &dX, &dY);

	a = bX - aX;
	printf("Povrsina pravilnoga cetverokuta: %d cm2\n", a * a);
}
