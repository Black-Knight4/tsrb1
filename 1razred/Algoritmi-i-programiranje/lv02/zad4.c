#include <stdio.h>

int main() {
	int kune, kn10, kn5, kn2, kn1;
	printf("Upisi broj kuna: ");
	scanf("%d", &kune);

	kn10 = kune / 10;
	kn5 = kune % 10 / 5;
	kn2 = kune % 5 / 2;
	kn1 = kune % 2;

	printf("U 48 kuna ima:\n");
	printf("- novcanica od 10 kn: %d\n", kn10);
	printf("- novcanica od 5 kn: %d\n", kn5);
	printf("- novcanica od 2 kn: %d\n", kn2);
	printf("- novcanica od 1 kn: %d\n", kn1);
}
