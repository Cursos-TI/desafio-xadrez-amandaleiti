#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código simula a movimentação de três peças de xadrez.
// No nível novato, usei estruturas de repetição para movimentar o Bispo, a Torre e a Rainha.

int main() {
    // Nível Novato - Movimentação das Peças

    // Aqui eu defini a quantidade de casas que cada peça vai andar.
    const int casasBispo = 5;
    const int casasTorre = 5;
    const int casasRainha = 8;

    int i;

    // Implementação de Movimentação do Bispo
    // O Bispo anda 5 casas na diagonal superior direita.
    // Para representar a diagonal, imprimo duas direções: Cima e Direita.
    printf("===== Movimento do Bispo =====\n");

    i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\n");

    // Implementação de Movimentação da Torre
    // A Torre anda 5 casas para a direita.
    printf("===== Movimento da Torre =====\n");

    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Implementação de Movimentação da Rainha
    // A Rainha anda 8 casas para a esquerda.
    printf("===== Movimento da Rainha =====\n");

    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

    return 0;
}