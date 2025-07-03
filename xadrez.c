#include <stdio.h>
#include <string.h>

void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

void moverBispoComLoop(int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (i == j) {
                printf("Cima Direita\n");
            }
        }
    }
}

int main() {
    printf("--TORRE--\n");
    moverTorre(5);

    printf("\n--RAINHA--\n");
    moverRainha(8);

    printf("\n--BISPO--\n");
    moverBispoRecursivo(5);

    printf("\n--BISPO--\n");
    moverBispoComLoop(5, 5);

    printf("\n--CAVALO--\n");
    for (int i = 2; i >= 1; i--) {
        for (int j = 0; j < 2; j++) {
            if (i == 1 && j == 1) {
                printf("Direita\n");
                break;
            }
            if (j > 0) continue;
            printf("Cima\n");
        }
    }

    return 0;
}
