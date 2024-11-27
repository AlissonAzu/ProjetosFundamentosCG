#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int M[4][6];
    int maior_valor = -11, menor_valor = 11;

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
// Para encontrar o maior e menor valor
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            if (M[i][j] > maior_valor) {
                maior_valor = M[i][j];
            }
            if (M[i][j] < menor_valor) {
                menor_valor = M[i][j];
            }
        }
    }

    printf("\nMaior valor da matriz: %d\n", maior_valor);
    printf("Menor valor da matriz: %d\n", menor_valor);

    return 0;
}
