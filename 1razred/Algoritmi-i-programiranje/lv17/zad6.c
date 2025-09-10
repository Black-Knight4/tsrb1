#include <stdio.h>

int main() {
    int age;
    printf("Koliko imas godina: ");
    scanf("%d", &age);

    if (age < 16) {
        printf("Ne mozes jos polagati vozacki ispit!\n");
    }
    else if (age < 18) {
        printf("Mozes polagati za A1 kategoriju (motocikli do 125cc).\n");
    }
    else {
        printf("Mozes polagati za B kategoriju(automobili)!\n");
    }
}
