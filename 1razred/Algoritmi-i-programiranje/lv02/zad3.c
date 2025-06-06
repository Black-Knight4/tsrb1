#include <stdio.h>

int main() {
	int tr, jed, des, sto;
	printf("Upisi troznamenkasti cijeli broj: ");
	scanf("%d", &tr);

	sto = tr / 100;
	des = tr % 100 / 10;
	jed = tr % 10;

	printf("Zbroj znamenki broja %d: %d\n", tr, jed + des + sto);
	printf("Umnozak znamenki broja %d: %d\n", tr, jed * des * sto);
}
