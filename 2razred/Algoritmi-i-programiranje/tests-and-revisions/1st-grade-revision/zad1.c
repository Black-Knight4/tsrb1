// input an sentence and word number, then print that word

#include <stdio.h>
#include <string.h>

int main() {
	char a[100];
	int opt;

	printf("unesi recenicu: "); 
	fgets(a, sizeof(a), stdin);

	printf("unesi broj rijeci: ");
	scanf("%d", &opt);

	int from, to;
	int n = 0;
	for (int i = 0; i < strlen(a); i++) {
		if (a[i] == ' ') {
			n++;
			if (n == opt) break;
		}

		if (n+1 == opt) printf("%c", a[i]);
	}

}
