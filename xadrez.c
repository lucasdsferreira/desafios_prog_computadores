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

    printf("--CAVALO--\n");
    int passos = 0;
    for (int l = 0; l < 2; l++) {
        printf("Baixo\n");
        while (passos < 1 && l == 1) {
            printf("Esquerda\n");
            passos++;
        }
    }

    return 0;
}
