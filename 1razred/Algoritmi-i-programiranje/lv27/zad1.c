#include <stdio.h>
#include <string.h>
 
void main() {
	char a[100];
	gets(a);
 
	int len;
	for (int i = 0; i < 100; i++) {
		if (a[i] == '\0') { 
            len = i;
            break;
        }
	}
 
	printf("%s, len = %d", a, len);
}
