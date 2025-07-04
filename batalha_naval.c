#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    int tabuleiro[10][10];

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    tabuleiro[2][1] = 3;
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;

    tabuleiro[5][6] = 3;
    tabuleiro[6][6] = 3;
    tabuleiro[7][6] = 3;

    tabuleiro[0][0] = 3;
    tabuleiro[1][1] = 3;
    tabuleiro[2][2] = 3;

    tabuleiro[0][9] = 3;
    tabuleiro[1][8] = 3;
    tabuleiro[2][7] = 3;

    int cone[5][5];
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (j >= 2 - i && j <= 2 + i) {
                cone[i][j] = 1;
            } else {
                cone[i][j] = 0;
            }
        }
    }

    int cruz[5][5];
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == 2 || j == 2) {
                cruz[i][j] = 1;
            } else {
                cruz[i][j] = 0;
            }
        }
    }

    int octaedro[5][5];
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (abs(i - 2) + abs(j - 2) <= 2) {
                octaedro[i][j] = 1;
            } else {
                octaedro[i][j] = 0;
            }
        }
    }

    int origemLinha = 4;
    int origemColuna = 4;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            int lin = origemLinha + i;
            int col = origemColuna - 2 + j;
            if (lin >= 0 && lin < 10 && col >= 0 && col < 10 && cone[i][j] == 1 && tabuleiro[lin][col] == 0) {
                tabuleiro[lin][col] = 5;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            int lin = origemLinha - 2 + i;
            int col = origemColuna - 2 + j;
            if (lin >= 0 && lin < 10 && col >= 0 && col < 10 && cruz[i][j] == 1 && tabuleiro[lin][col] == 0) {
                tabuleiro[lin][col] = 5;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            int lin = origemLinha - 2 + i;
            int col = origemColuna - 2 + j;
            if (lin >= 0 && lin < 10 && col >= 0 && col < 10 && octaedro[i][j] == 1 && tabuleiro[lin][col] == 0) {
                tabuleiro[lin][col] = 5;
            }
        }
    }

    printf("\n=== TABULEIRO ===\n\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
