#include <stdio.h>

 
void main() {
	float a;
 
	do {
		printf("enter num: ");
		scanf("%f", &a);
	} while (a != (int)a || a <= 0);
 
	if ((int)a % 2 == 0) printf("even");
	else printf("uneven");
}
