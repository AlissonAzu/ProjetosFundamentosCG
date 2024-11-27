#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int M[4][6];
    int soma_segunda_linha = 0, soma_quinta_coluna = 0, soma_multiplicacao = 0;
    int soma_colunas_pares = 0, soma_linhas_impares = 0;

    srand(time(NULL));

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            M[i][j] = rand() % 21 - 10;
        }
    }

    printf("Matriz 4x6 gerada:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    // a. Soma dos elementos da segunda linha
    for (int j = 0; j < 6; j++) {
        soma_segunda_linha += M[1][j];
    }
    printf("\nSoma dos elementos da segunda linha: %d\n", soma_segunda_linha);

    // b. Soma dos elementos da quinta coluna
    for (int i = 0; i < 4; i++) {
        soma_quinta_coluna += M[i][4];
    }
    printf("Soma dos elementos da quinta coluna: %d\n", soma_quinta_coluna);

    // c. Soma da multiplicação dos elementos da primeira linha pelos elementos da quarta linha
    for (int j = 0; j < 6; j++) {
        soma_multiplicacao += M[0][j] * M[3][j];
    }
    printf("Soma da multiplicação dos elementos da primeira linha pelos da quarta linha: %d\n", soma_multiplicacao);

    // d. Soma dos elementos das colunas com índices pares
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            if (j % 2 == 0) {
                soma_colunas_pares += M[i][j];
            }
        }
    }
    printf("Soma dos elementos das colunas com índices pares: %d\n", soma_colunas_pares);

    // e. Soma dos elementos das linhas com índices ímpares
    for (int i = 0; i < 4; i++) {
        if (i % 2 != 0) {
            for (int j = 0; j < 6; j++) {
                soma_linhas_impares += M[i][j];
            }
        }
    }
    printf("Soma dos elementos das linhas com índices ímpares: %d\n", soma_linhas_impares);

    return 0;
}
