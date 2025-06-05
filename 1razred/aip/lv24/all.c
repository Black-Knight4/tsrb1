#include <stdio.h>
#include <math.h>
#include <ctype.h>
 
/*
void main() {
	char a;
 
	do {
		printf("enter char: ");
		scanf_s(" %c", &a);
	} while (!isalpha(a));
 
	if (isupper(a)) printf("upper");
	else printf("lower");
}
 
*/
 
/*
void main() {
	float a;
 
	do {
		printf("enter num: ");
		scanf_s("%f", &a);
	} while (a != (int)a || a <= 0);
 
	if ((int)a % 2 == 0) printf("even");
	else printf("uneven");
}
 
*/
 
/*
void main() {
	float a, b;
 
	do {
		printf("enter nums: ");
		scanf_s("%f %f", &a, &b);
	} while (a < 0 || b < 0 || (int)a == a || (int)b == b);
 
	float sqrt_ = sqrtf(fmaxf(a, b));
	printf("sqrt: %f", sqrt_);
}
 
*/
 
/*
void main() {
	int a;
 
	do {
		printf("enter num: ");
		scanf_s("%d", &a);
	} while (a <= 0 || (int)a != a);
 
 
	printf("deviders: ");
	for (int i = 1; i <= (a / 2); i++) {
		if (a % i == 0) printf("%d, ", i);
	}
 
	printf("%d", a);
}
*/
 
 
void main() {
	char a;
	do {
		printf("upisi znak: ");
		scanf_s(" %c", &a);
	} while (isalpha(a));
 
	int a_ = a - 48;
 
	for (int i = 2; i <= (a_ / 2); i++) {
		if (a_ % i == 0) {
			printf("nije prim");
			return;
		}
	}
 
	printf("prim je");
 
}
 
/*
void main() {
	char a;
 
 
	do {
		printf("enter char:");
		scanf_s(" %c", &a);
	} while (!isupper(a));
 
	for (int i = 'A'; i < a; i++) 
		printf("%c, ", i);

 
}
*/