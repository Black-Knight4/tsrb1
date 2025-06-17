#include <stdio.h>

int main() {
    int celsius = 0;
    int freedomUnits = (int)((float)celsius * (9.f / 5.f) + 32); // im too lazy to spell

    printf("Za temperaturu od %d stupnjeva Celsiusa:\n", celsius);
    printf(" - temperatura u stupnjevima Fahrenheita: %d\n", freedomUnits);
}