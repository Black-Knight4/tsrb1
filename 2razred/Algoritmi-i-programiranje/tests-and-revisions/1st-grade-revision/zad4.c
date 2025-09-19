// input an sentence, then print the longest word

#include <stdio.h>
#include <string.h>

int main() {
	char a[100];

	printf("unesi recenicu: "); 
	fgets(a, sizeof(a), stdin);

    int start_longest = 0;
    int end_longest = 0;

    int start = 0;
    int end = 0;

    for (int i = 0; i < strlen(a); i++) {
        if (a[i] == ' ' || i == strlen(a)-1) {
            end = i-1;

            if ((end - start + 1) > (end_longest - start_longest + 1)) {
                start_longest = start;
                end_longest = end;
            };

            start = i+1;
        }
	}

    char max_word[100];
    int j = 0;
    for (int i = start_longest; i <= end_longest; i++) {
        max_word[j] = a[i];
        j++;
    }
    max_word[j] = '\0';

    printf("najduza rijec je duga %d slova, a to je: %s", (end_longest - start_longest + 1), max_word);
}
