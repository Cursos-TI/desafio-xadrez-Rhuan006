#include <stdio.h>

int main() {
    // Movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (5 casas na diagonal para cima e à direita)
    printf("\nMovimento do Bispo:\n");
    int b = 0;
    while (b < 5) {
        printf("Cima Direita\n");
        b++;
    }

    // Movimento da Rainha (8 casas para a esquerda)
    printf("\nMovimento da Rainha:\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < 8);

    return 0;
}