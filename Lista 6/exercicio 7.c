#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int M[5][5];

    srand(time(NULL));

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            M[i][j] = rand() % 21 - 10;
        }
    }

    printf("Matriz original 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%3d ", M[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            M[i][j] = -M[i][j];
        }
    }

    printf("\nMatriz transformada 5x5 (negativos e positivos invertidos):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%3d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
