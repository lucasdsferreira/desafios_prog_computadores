#include <stdio.h>
#include <string.h>

int main() {
    int i;

    printf("--TORRE--\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("--RAINHA--\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("--BISPO--\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);
    
    return 0;
}