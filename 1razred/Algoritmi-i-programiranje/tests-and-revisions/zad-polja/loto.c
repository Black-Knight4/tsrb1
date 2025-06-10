#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
    int input[7];
    int nums[7];

    int matches = 0;
    int matched[7];

    srand(time(NULL));

    for (int i = 0; i < 7; i++) {
        unsigned int isunique = 1;

        do {
            isunique = 1;

            printf("Unesite %d. broj u intervalu [1, 39]: ", i + 1);
            scanf("%d", &input[i]);

            for (int j = 0; j < i; j++) {
                if (input[i] == input[j]) {
                    isunique = 0;
                    break;
                }
            }
        } while (input[i] < 1 || input[i] > 39 || !isunique);
    }

    for (int i = 0; i < 7; i++) {
        unsigned int isunique = 1;

        do {
            isunique = 1;

            nums[i] = rand() % 39 + 1;
            
            for (int j = 0; j < i; j++) {
                if (nums[i] == nums[j]) {
                    isunique = 0;
                    break;
                }
            }
        } while (!isunique);
    }

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (input[i] == nums[j]) {
                matched[matches] = nums[j];
                matches++;
            }
        }
    }

    float reward = 0;
    if (matches == 4)
        reward = 16.5;
    else if (matches == 5)
        reward = 1045.55;
    else if (matches == 6)
        reward = 12349.87;
    else if (matches == 7)
        reward = 1000000;

    printf("\n\nIzvuceni brojevi: ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", nums[i]);
    }

    if (matches != 0) {
        printf("\n\nPogodili ste brojeve: ");
        for (int i = 0; i < matches; i++) {
            printf("%d ", nums[i]);
        }
    }

    printf("\n\nPogodaka: %d", matches);
    printf("\nOsvojili ste %.2f eura.", reward);
}
