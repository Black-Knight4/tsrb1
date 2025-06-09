#include <stdio.h>
#include <string.h>

void main() {
	char a[100];
	gets(a);
 
	int n = 1;
	for (int i = 1; i < 100; i++) {
		if (a[i+1] == '\0') break;
		if (a[i] == ' ') n++;
	}
 
	printf("num words: %d", n);
}

