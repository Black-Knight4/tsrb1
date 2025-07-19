#include <stdio.h>

int main() {
    int raz1, raz2, raz3, kun, lip;
    printf("Unesi minute 1 razgovora: ");
    scanf("%d", &raz1);
    printf("Unesi minute 2 razgovora: ");
    scanf("%d", &raz2);
    printf("Unesi minute 3 razgovora: ");
    scanf("%d", &raz3);

    lip = 3 * 45 + 5 * 60 * raz1 + 5 * 60 * raz2 + 5 * 60 * raz3; // 5 lipa po sekundi * 60 sekunda u minuti * razX minuta razgovora
    kun = lip / 100;
    lip = lip % 100;

    printf("Cijena racuna iznosi %d kuna i %d lipa.\n", kun, lip);
}
