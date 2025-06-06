#include <stdio.h>

int main() {
	int a, b, opseg, povrsina;
	printf("Upisi stranicu a: ");
	scanf("%d", &a);

	printf("Upisi stranicu b: ");
	scanf("%d", &b);

	opseg = 2 * a + 2 * b; // O = 2a + 2b
	printf("Opseg pravokutnika iznosi %d\n", opseg);
	povrsina = a * b; // P = a * b
	printf("Povorsnia pravokutnika iznosi: %d\n", povrsina);
}
