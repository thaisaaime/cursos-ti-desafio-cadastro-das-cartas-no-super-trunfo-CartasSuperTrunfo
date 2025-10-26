#include <stdio.h>

int main() {
    // =============================
    // Simulação de movimentação no xadrez
    // Peças: Torre, Bispo e Rainha
    //
    // =============================

    // =============================
    // Movimento da TORRE (for)
    // =============================
    // A torre se move em linha reta — neste caso, 5 casas para a direita.
    int casasTorre = 5;
    printf("Movimento da TORRE:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }
    printf("\n");

    // =============================
    // Movimento do BISPO (while)
    // =============================
    // O bispo se move na diagonal — neste caso, 5 casas para cima e à direita.
    int casasBispo = 5;
    int contador = 1;
    printf("Movimento do BISPO:\n");
    while (contador <= casasBispo) {
        printf("Cima, Direita (%d)\n", contador);
        contador++;
    }
    printf("\n");

    // =============================
    // Movimento da RAINHA (do-while)
    // =============================
    // A rainha se move em todas as direções — neste caso, 8 casas para a esquerda.
    int casasRainha = 8;
    int pos = 1;
    printf("Movimento da RAINHA:\n");
    do {
        printf("Esquerda (%d)\n", pos);
        pos++;
    } while (pos <= casasRainha);

    // Fim do programa
    printf("\nFim da simulação de movimentos.\n");
    return 0;
}
