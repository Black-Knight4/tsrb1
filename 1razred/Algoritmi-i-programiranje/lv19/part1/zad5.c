#include <stdio.h>
#include <ctype.h>

void main() {
    char choice;
    printf("Upisi: \nf - zena \nm - muskarac \n");
    scanf(" %c", &choice);

    choice = tolower(choice);

    float age;
    switch (choice)
    {
    case 'f':
        age = 80;
        break;
    
    case 'm':
        age = 75;
        break;
    
    default:
        printf("invalid choice");
        return;
    }

    int cigare, povorce;
    printf("Upisi broj cigara i broj obroka povrca po danu: ");
    scanf("%d %d", &cigare, &povorce);

    age -= 0.5 * cigare;
    age += povorce;

    printf("Ocekivani zivotni vijek: %.1f godina.", age);
}