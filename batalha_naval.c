#include <stdio.h>

int main() {
    int tabuleiro[10][10];
    int i, j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    int tamanho_navio = 3;

    int linha_h1 = 1, coluna_h1 = 2;
    for (i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_h1][coluna_h1 + i] = 3;
    }

    int linha_v1 = 5, coluna_v1 = 7;
    for (i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_v1 + i][coluna_v1] = 3;
    }

    int linha_diag1 = 0, coluna_diag1 = 0;
    for (i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_diag1 + i][coluna_diag1 + i] = 3;
    }

    int linha_diag2 = 0, coluna_diag2 = 9;
    for (i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_diag2 + i][coluna_diag2 - i] = 3;
    }

    printf("=== TABULEIRO ===\n\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
