#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código simula a movimentação de peças de xadrez.
// No nível novato, usei estruturas de repetição para o Bispo, a Torre e a Rainha.
// No nível aventureiro, adicionei o movimento do Cavalo usando loops aninhados.

int main() {
    // ===== NÍVEL NOVATO - MOVIMENTAÇÃO DAS PEÇAS =====

    // Aqui eu defini a quantidade de casas que cada peça vai andar.
    const int casasBispo = 5;
    const int casasTorre = 5;
    const int casasRainha = 8;

    int i;

    // ===== MOVIMENTO DO BISPO =====
    // O Bispo anda 5 casas na diagonal superior direita.
    // Para representar a diagonal, imprimo duas direções: Cima e Direita.
    printf("===== Movimento do Bispo =====\n");

    i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\n");

    // ===== MOVIMENTO DA TORRE =====
    // A Torre anda 5 casas para a direita.
    printf("===== Movimento da Torre =====\n");

    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ===== MOVIMENTO DA RAINHA =====
    // A Rainha anda 8 casas para a esquerda.
    printf("===== Movimento da Rainha =====\n");

    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

    printf("\n");

    // ===== NÍVEL AVENTUREIRO - MOVIMENTAÇÃO DO CAVALO =====

    // O Cavalo anda em formato de L.
    // Neste desafio, ele anda duas casas para baixo e uma casa para a esquerda.
    // Usei loops aninhados: um for por fora e um while por dentro.

    printf("===== Movimento do Cavalo =====\n");

    for (int movimentoVertical = 1; movimentoVertical <= 2; movimentoVertical++) {
        printf("Baixo\n");

        int movimentoHorizontal = 1;

        while (movimentoVertical == 2 && movimentoHorizontal <= 1) {
            printf("Esquerda\n");
            movimentoHorizontal++;
        }
    }

    return 0;
}