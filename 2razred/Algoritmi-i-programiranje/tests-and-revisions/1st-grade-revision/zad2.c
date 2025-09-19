// input n grades nto an array then put positive ones into antoher array

#include <stdio.h>

int main() {
	int a[30], n;

	for (n = 0; n < 30; n++) {
		int ocj;
		printf("unesi ocjenu, 0 za izlaz: ");
		scanf("%d", &ocj);

		if (ocj == 0) break;
		a[n] = ocj;
	}
	
	int poz[30], n_poz = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > 1) {
			poz[n_poz] = a[i];
			n_poz++;
		}
	}

	for (int i = 0; i < n_poz; i++) {
		printf("%d ", poz[i]);
	}
}
