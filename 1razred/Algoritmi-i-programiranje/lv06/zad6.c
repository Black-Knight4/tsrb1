#include <stdio.h>

int main() {
    int a, b;
    printf("Upisi logicku vrijednost na ulazu A sklopa ILI: ");
    scanf("%d", &a);
    printf("Upisi logicku vrijednost na ulazu B sklopa ILI: ");
    scanf("%d", &b);

    if ((a == 1 || a == 0) && (b == 1 || b == 0)) {
        printf("Vrijednost na izlazu ILI sklopa: %d\n", a || b);
    }
    else {
        printf("Jedna vrijednost nije ispravna!\n");
    }
}
