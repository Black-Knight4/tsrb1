// input an sentence, then print the length of the longest word

#include <stdio.h>
#include <string.h>

int main() {
	char a[100];
	int opt;

	printf("unesi recenicu: "); 
	fgets(a, sizeof(a), stdin);

    int word_len = 0;
    int j = 0;
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] == ' ') {
            if (j > word_len) word_len = j;
            j = 0;
        } else 
            j++;

	}

    printf("najduza rijec: %d", word_len);

}
