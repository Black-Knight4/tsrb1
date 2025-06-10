#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c, najm;
	printf("Upisi prvu ocjenu: ");
	scanf("%d", &a);
	printf("Upisi drugu ocjenu: ");
	scanf("%d", &b);
	printf("Upisi trecu ocjenu: ");
	scanf("%d", &c);

	najm = min(a, min(b, c));

	printf("Najmanja ocjena: %d\n", najm);
}
