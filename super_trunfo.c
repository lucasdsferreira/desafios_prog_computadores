#include <stdio.h>

int main() {
    char nome1[50] = "Brasil";
    int populacao1 = 203000000;
    float area1 = 8515767.0;
    float pib1 = 2200.5;
    int pontos1 = 150;
    float densidade1 = populacao1 / area1;

    char nome2[50] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400.0;
    float pib2 = 640.0;
    int pontos2 = 100;
    float densidade2 = populacao2 / area2;

    int op1, op2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    float soma1 = 0, soma2 = 0;

    printf("=== SUPER TRUNFO ===\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &op1);

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != op1) {
            switch (i) {
                case 1: printf("%d - População\n", i); break;
                case 2: printf("%d - Área\n", i); break;
                case 3: printf("%d - PIB\n", i); break;
                case 4: printf("%d - Pontos Turísticos\n", i); break;
                case 5: printf("%d - Densidade Demográfica\n", i); break;
            }
        }
    }
    printf("Opção: ");
    scanf("%d", &op2);

    switch (op1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontos1; valor1_carta2 = pontos2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        default: printf("Atributo inválido!\n"); return 1;
    }

    switch (op2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontos1; valor2_carta2 = pontos2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
        default: printf("Atributo inválido!\n"); return 1;
    }

    if (op1 == 5) {
        soma1 += (valor1_carta1 < valor1_carta2) ? 1 : (valor1_carta1 == valor1_carta2 ? 0.5 : 0);
        soma2 += (valor1_carta2 < valor1_carta1) ? 1 : (valor1_carta1 == valor1_carta2 ? 0.5 : 0);
    } else {
        soma1 += (valor1_carta1 > valor1_carta2) ? 1 : (valor1_carta1 == valor1_carta2 ? 0.5 : 0);
        soma2 += (valor1_carta2 > valor1_carta1) ? 1 : (valor1_carta1 == valor1_carta2 ? 0.5 : 0);
    }

    if (op2 == 5) {
        soma1 += (valor2_carta1 < valor2_carta2) ? 1 : (valor2_carta1 == valor2_carta2 ? 0.5 : 0);
        soma2 += (valor2_carta2 < valor2_carta1) ? 1 : (valor2_carta1 == valor2_carta2 ? 0.5 : 0);
    } else {
        soma1 += (valor2_carta1 > valor2_carta2) ? 1 : (valor2_carta1 == valor2_carta2 ? 0.5 : 0);
        soma2 += (valor2_carta2 > valor2_carta1) ? 1 : (valor2_carta1 == valor2_carta2 ? 0.5 : 0);
    }

    printf("\n--- Resultado ---\n");
    printf("%s vs %s\n", nome1, nome2);

    printf("\nAtributo 1: ");
    switch (op1) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica\n"); break;
    }
    printf("%s: %.2f\n", nome1, valor1_carta1);
    printf("%s: %.2f\n", nome2, valor1_carta2);

    printf("\nAtributo 2: ");
    switch (op2) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica\n"); break;
    }
    printf("%s: %.2f\n", nome1, valor2_carta1);
    printf("%s: %.2f\n", nome2, valor2_carta2);

    printf("\nPontuação total:\n");
    printf("%s: %.1f\n", nome1, soma1);
    printf("%s: %.1f\n", nome2, soma2);

    printf("\nResultado final: ");
    (soma1 > soma2) ? printf("%s venceu!\n", nome1) :
    (soma2 > soma1) ? printf("%s venceu!\n", nome2) :
    printf("Empate!\n");

    return 0;
}
