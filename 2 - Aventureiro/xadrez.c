#include <stdio.h>

int main() {
    // --- Movimento da Torre ---
    printf("Movimentando a Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\n");

    // --- Movimento do Bispo ---
    printf("Movimentando o Bispo:\n");
    int bispoPassos = 1;
    while (bispoPassos <= 5) {
        printf("Cima Direita (%d)\n", bispoPassos);
        bispoPassos++;
    }

    printf("\n");

    // --- Movimento da Rainha ---
    printf("Movimentando a Rainha:\n");
    int rainhaPassos = 1;
    do {
        printf("Esquerda (%d)\n", rainhaPassos);
        rainhaPassos++;
    } while (rainhaPassos <= 8);

    printf("\n");

    // --- Movimento do Cavalo ---
    printf("Movimentando o Cavalo:\n");

    // Primeiro loop FOR para as duas casas para baixo
    for (int i = 1; i <= 2; i++) {
        printf("Baixo (%d)\n", i);
    }

    // Segundo loop WHILE para uma casa à esquerda
    int j = 1;
    while (j <= 1) {
        printf("Esquerda (%d)\n", j);
        j++;
    }

    return 0;
}
