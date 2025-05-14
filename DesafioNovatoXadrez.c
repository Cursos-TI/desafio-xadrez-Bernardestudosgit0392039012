#include <stdio.h>

int main() {
    // Torre: move 5 casas para a direita (usando for)
    int movimentoTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }

    // Bispo: move 5 casas na diagonal cima-direita (usando while)
    int movimentoBispo = 5;
    int i = 0;
    printf("\nMovimento do Bispo:\n");
    while (i < movimentoBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // Rainha: move 8 casas para a esquerda (usando do-while)
    int movimentoRainha = 8;
    i = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        i++;
    } while (i < movimentoRainha);

    return 0;
}
