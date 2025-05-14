#include <stdio.h>

// Torre (recursiva)
void moverTorre(int casas) {
    if (casas == 0)
        return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Rainha (recursiva)
void moverRainha(int casas) {
    if (casas == 0)
        return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Bispo (recursiva + loops aninhados)
void moverBispo(int vertical, int horizontal) {
    if (vertical == 0 || horizontal == 0)
        return;

    for (int i = 0; i < vertical; i++) {
        for (int j = 0; j < horizontal; j++) {
            if (i == j) { // só imprime se for na diagonal (1:1)
                printf("Cima Direita\n");
            }
        }
    }
    // Chamada recursiva para continuar "subindo" na diagonal
    moverBispo(vertical - 1, horizontal - 1);
}

// Cavalo (loops aninhados avançados)
void moverCavalo() {
    int movimentos = 1; // Só 1 movimento de L (2 cima, 1 direita)
    printf("Movimento do Cavalo:\n");

    for (int i = 0; i < movimentos; i++) {
        int passosVerticais = 2;
        int passosHorizontais = 1;

        for (int v = 0; v <= passosVerticais; v++) {
            if (v == passosVerticais) {
                for (int h = 0; h < passosHorizontais; h++) {
                    if (h > 1) continue; // segurança
                    printf("Direita\n");
                    break; // só 1 vez
                }
            } else {
                printf("Cima\n");
            }
        }
    }
}

// Função principal
int main() {
    // Movimento da Torre
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Movimento do Bispo
    int casasBispo = 5;
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo, casasBispo);  // Diagonal de 5x5

    // Movimento da Rainha
    int casasRainha = 8;
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Movimento do Cavalo
    printf("\n");
    moverCavalo();

    return 0;
}
