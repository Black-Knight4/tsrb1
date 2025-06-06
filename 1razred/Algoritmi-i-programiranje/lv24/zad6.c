#include <stdio.h>
#include <ctype.h>


void main() {
	char a;
 
	do {
		printf("enter char:");
		scanf_s(" %c", &a);
	} while (!isupper(a));
 
	for (int i = 'A'; i < a; i++) 
		printf("%c, ", i);
}
