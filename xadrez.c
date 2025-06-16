#include <stdio.h>

// Função recursiva para mover a Torre
void moverTorre(int casasRestantes, int passo) {
    if (casasRestantes == 0) return;
    printf("Casa %d: Direita\n", passo);
    moverTorre(casasRestantes - 1, passo + 1);
}

// Função recursiva para mover a Rainha
void moverRainha(int casasRestantes, int passo) {
    if (casasRestantes == 0) return;
    printf("Casa %d: Esquerda\n", passo);
    moverRainha(casasRestantes - 1, passo + 1);
}

// Função recursiva + loops aninhados para o Bispo
void moverBispo(int linhaAtual, int maxLinhas) {
    if (linhaAtual > maxLinhas) return;

    for (int coluna = 1; coluna <= 1; coluna++) {
        printf("Casa %d: Cima Direita\n", linhaAtual);
    }

    moverBispo(linhaAtual + 1, maxLinhas);
}

// Loops complexos para o Cavalo (2 cima, 1 direita)
void moverCavalo() {
    printf("Movimento do Cavalo:\n");
    int movimentos = 1;

    for (int i = 0; i < 3; i++) {  // Loop de controle total
        for (int j = 0; j < 3; j++) {
            if (i == 0 && j < 2) {
                printf("Passo %d: Cima\n", movimentos++);
            } else if (i == 1 && j == 2) {
                printf("Passo %d: Direita\n", movimentos++);
                break; // finaliza o movimento do Cavalo
            } else {
                continue; // ignora passos desnecessários
            }
        }
    }
}

int main() {
    int casasTorre = 5;
    int casasRainha = 8;
    int casasBispo = 5;

    // --------------------
    // Movimento da TORRE
    // --------------------
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre, 1);

    // --------------------
    // Movimento do BISPO
    // --------------------
    printf("\nMovimento do Bispo:\n");
    moverBispo(1, casasBispo);

    // ---------------------
    // Movimento da RAINHA
    // ---------------------
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha, 1);

    // ---------------------
    // Movimento do CAVALO
    // ---------------------
    printf("\n");
    moverCavalo();

    return 0;
}
