#include <stdio.h>

void main() {
    /*
    length of char is 1bytes meaning it has 2^8 = 128 (from 0 to 127) different symbols in the ASCII table 
    */
    printf("Prvih 5 velikih slova engleske abecee i pripadni ASCII kodovi \n");
    printf("Slovo            ASCII kod \n");
    printf("-------------------------- \n");
    printf("   %c                 %d   \n", 'A', 'A');
    printf("   %c                 %d   \n", 66, 66);
    printf("   %c                 %d   \n", 'C', 67);
    printf("   %c                 %d   \n", 68, 'D');
    printf("   %c                 %d   \n", 'E', 'E');
}
