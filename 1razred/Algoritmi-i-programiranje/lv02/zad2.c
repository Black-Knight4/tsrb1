#include <stdio.h>

int main() {
	int c, f;
	printf("Upisi vrijednost temperaature u stupnjevima Celsiusa: ");
	scanf("%d", &c);

	f = (int)(c * (9.f / 5.f) + 32);
	printf("Temperatura u stupnjevima Fahrenheita: %d\n", f);
}
