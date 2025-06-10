#include <stdio.h>
#include <math.h>

int main() {
	int a, o;
	float p;
	printf("Upisi duljinu stranice istostranicnoga trokuta: ");
	scanf("%d", &a);

	p = a / 2.f * sqrtf(3.f);
	o = a * 3;

	printf("Povrsina trokuta: %f cm2\n", p);
	printf("Opseg trokuta: %d\n", o);
}
