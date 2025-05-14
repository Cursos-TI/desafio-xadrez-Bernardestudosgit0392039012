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

    // Cavalo: move em "L" (duas para baixo, uma para a esquerda)
    // Usando for + while
    int passosBaixo = 2;
    int passosEsquerda = 1;
    printf("\nMovimento do Cavalo:\n");

    for (i = 0; i < passosBaixo; i++) {
        printf("Baixo\n");

        // Este while executa apenas no último passo para fazer o "L"
        if (i == passosBaixo - 1) {
            int j = 0;
            while (j < passosEsquerda) {
                printf("Esquerda\n");
                j++;
            }
        }
    }

    return 0;
}
