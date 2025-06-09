#include <stdio.h>
#include <string.h>

void main() {
	char a[100];
	char word[100]; int j = 0;

	gets(a);
	printf("druga rijec: ");

	int flag = 0;
	for (int i = 1; i < strlen(a); i++) {
		if (flag) {
			word[j] = a[i];
			j++;
		}
 
		if (a[i] == ' ') {
			if (flag == 1) break;
			else flag = 1;
		}
	}
 
	word[j] = '\0';
	printf("%s", word);
}

