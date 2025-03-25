#include <stdio.h>

// Função recursiva para mover a Torre 5 casas para a direita
void moverTorre(int casas) {
    if (casas == 0) return;  // Caso base
    printf("Direita\n");
    moverTorre(casas - 1);   // Chamada recursiva
}

// Função recursiva para mover o Bispo 5 casas na diagonal (Cima-Direita)
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Função recursiva para mover a Rainha 8 casas para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Movimento do Cavalo (2 para cima, 1 para a direita) usando loops aninhados
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");

    // Loop para mover 2 casas para cima
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }

    // Mover 1 casa para a direita
    printf("Direita\n");
}

// Implementação do Bispo usando loops aninhados
void moverBispoLoop(int casas) {
    printf("\nMovimento do Bispo (Usando Loops Aninhados):\n");

    for (int i = 0; i < casas; i++) {  // Movendo na diagonal (Cima-Direita)
        printf("Cima Direita\n");
    }
}

// Função principal
int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5);  // Torre se move 5 casas para a direita

    printf("\nMovimento do Bispo (Usando Recursão):\n");
    moverBispoRecursivo(5);  // Bispo se move 5 casas na diagonal (Cima-Direita)

    printf("\nMovimento do Bispo (Usando Loops Aninhados):\n");
    moverBispoLoop(5);  // Bispo se move usando loops aninhados

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);  // Rainha se move 8 casas para a esquerda

    moverCavalo();  // Movimento do Cavalo (2 casas para cima, 1 para a direita)

    return 0;
}