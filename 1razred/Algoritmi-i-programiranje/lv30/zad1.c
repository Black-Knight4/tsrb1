#include <stdio.h>

void main() {
    int a[3][4]; // array of arrays => {{1, 2, 3, 4}, {5, 6, 7, 8}, {4, 3, 2, 1}}
    /*
    {
    {1, 2, 3, 4}, 
    {5, 6, 7, 8},
    {4, 3, 2, 1}
    }
    */

    for (int i = 0; i < 3; i++) {  // for each inner array loop over it and input numbers in it
        printf("enter for %d. row: ", i+1);
        for (int j = 0; j < 4; j++) scanf("%d", &a[i][j]); // in the inner array with index 'i', input number at index 'j'
    }

    for (int i = 0; i < 3; i++) { // loop over each inner array
        printf("\n");
        for (int j = 0; j < 4; j++) printf("%d ", a[i][j]); // then loop over elements of that inner array, where 'i' is index of the inner array and 'j' index of the element in that array, then print them out
    }

    printf("\n");
}