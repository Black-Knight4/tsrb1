// input a sentence and print how many letters the longest word has

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char a[64];
    int max_len = 0, len = 0;
    printf("Upisi recenicu: ");
    gets(a);

    for (int i = 0; i < strlen(a); i++) {
        if (a[i] == ' ') {
            len = 0;
            continue;
        }

        len++;
        max_len = fmax(max_len, len);
    }

    printf("Najduza rijec ima %d slova.\n", max_len);
}
