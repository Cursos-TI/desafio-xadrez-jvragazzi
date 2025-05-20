#include <stdio.h>

int main() {
    // Simulação da Torre usando FOR
    printf("Movimentando a Torre:\n");
    // A Torre vai se mover 5 casas para a Direita
    for (int i = 1; i <= 5; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\n"); // Separador para melhorar a visualização

    // Simulação do Bispo usando WHILE
    printf("Movimentando o Bispo:\n");
    // O Bispo vai se mover 5 casas na diagonal "Cima Direita"
    int bispoPassos = 1;
    while (bispoPassos <= 5) {
        printf("Cima Direita (%d)\n", bispoPassos);
        bispoPassos++;
    }

    printf("\n"); // Separador para melhorar a visualização

    // Simulação da Rainha usando DO-WHILE
    printf("Movimentando a Rainha:\n");
    // A Rainha vai se mover 8 casas para a Esquerda
    int rainhaPassos = 1;
    do {
        printf("Esquerda (%d)\n", rainhaPassos);
        rainhaPassos++;
    } while (rainhaPassos <= 8);

    return 0;
}
