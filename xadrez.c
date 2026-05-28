#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nivel Mestre: usando funcoes recursivas, loops aninhados,
// continue e break para simular movimentos das pecas.

// Funcao recursiva para movimentar a Torre
void moverTorre(int casas) {
    // Se casas chegar em 0, a funcao para
    if (casas == 0) {
        return;
    }

    printf("Direita\n");

    // A funcao chama ela mesma diminuindo uma casa
    moverTorre(casas - 1);
}

// Funcao recursiva para movimentar a Rainha
void moverRainha(int casas) {
    // Quando casas chegar em 0, a recursao termina
    if (casas == 0) {
        return;
    }

    printf("Esquerda\n");

    // Chamada recursiva para continuar o movimento
    moverRainha(casas - 1);
}

// Funcao recursiva para movimentar o Bispo
void moverBispo(int casas) {
    // Quando casas chegar em 0, a funcao para
    if (casas == 0) {
        return;
    }

    // Loop aninhado para representar a diagonal do Bispo
    // O loop de fora representa o movimento vertical
    // O loop de dentro representa o movimento horizontal
    for (int vertical = 1; vertical <= 1; vertical++) {
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima, Direita\n");
        }
    }

    // Chamada recursiva para continuar andando as casas restantes
    moverBispo(casas - 1);
}

int main() {
    // Quantidade de casas de cada peca
    int casasBispo = 5;
    int casasTorre = 5;
    int casasRainha = 8;

    // ===== MOVIMENTO DO BISPO =====
    // O Bispo anda 5 casas na diagonal para cima e direita.
    printf("===== Movimento do Bispo =====\n");
    moverBispo(casasBispo);

    printf("\n");

    // ===== MOVIMENTO DA TORRE =====
    // A Torre anda 5 casas para a direita.
    printf("===== Movimento da Torre =====\n");
    moverTorre(casasTorre);

    printf("\n");

    // ===== MOVIMENTO DA RAINHA =====
    // A Rainha anda 8 casas para a esquerda.
    printf("===== Movimento da Rainha =====\n");
    moverRainha(casasRainha);

    printf("\n");

    // ===== MOVIMENTO DO CAVALO =====
    // O Cavalo anda em L: duas casas para cima e uma para a direita.
    // Aqui usei loop com variaveis multiplas, continue e break.
    printf("===== Movimento do Cavalo =====\n");

    for (int movimento = 1, casas = 3; movimento <= casas; movimento++) {
        // Nas duas primeiras repeticoes, o Cavalo anda para cima
        if (movimento <= 2) {
            printf("Cima\n");
            continue;
        }

        // Na terceira repeticao, o Cavalo anda para a direita
        if (movimento == 3) {
            printf("Direita\n");
            break;
        }
    }

    return 0;
}