#include <stdio.h>

// Função recursiva para movimentar a Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimentar a Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva com loop aninhado para movimentar o Bispo
void moverBispo(int casas) {
    if (casas == 0) return;

    for (int i = 0; i < 1; i++) { // Loop externo: vertical (Cima)
        for (int j = 0; j < 1; j++) { // Loop interno: horizontal (Direita)
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
}

int main() {
    // Movimento da Torre usando recursividade
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // Movimento do Bispo usando recursividade e loops aninhados
    printf("Movimento do Bispo:\n");
    moverBispo(5);
    printf("\n");

    // Movimento da Rainha usando recursividade
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // Movimento do Cavalo com loops aninhados e múltiplas condições
    // Duas casas para cima e uma para a direita
    printf("Movimento do Cavalo:\n");

    for (int i = 0; i < 3; i++) {
        if (i < 2) {
            printf("Cima\n");
            continue; // Continua subindo até completar 2 casas
        }

        for (int j = 0; j < 1; j++) {
            if (j == 0) {
                printf("Direita\n");
                break; // Após mover uma vez para a direita, encerra
            }
        }
    }

    return 0;
}
