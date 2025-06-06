#include <stdio.h>

int main() {
	int a, b;
	printf("Upisi prvi broj: ");
	scanf("%d", &a);

	printf("Upisi drugi broj: ");
	scanf("%d", &b);

	printf("a %d\n", a);
	printf("b %d\n", b);
	printf("zbroj %d\n", a + b);
	printf("razlika %d\n", a - b);
	printf("umnozak %d\n", a * b);
	printf("razlika %f\n", (float)a / b);
}
