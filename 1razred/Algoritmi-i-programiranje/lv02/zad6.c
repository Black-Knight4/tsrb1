#include <stdio.h>

int main() {
	int x, y, temp;
	printf("Upisi vrijednost varijable x: ");
	scanf("%d", &x);
	printf("Upisi vrijednost varijable y: ");
	scanf("%d", &y);

	temp = y;
	y = x;
	x = temp;

	printf("Nakon zamjene vrijednosti: \n");
	printf("- vrijednost varijable x: %d\n", x);
	printf("- vrijednost varijable y: %d\n", y);
}
