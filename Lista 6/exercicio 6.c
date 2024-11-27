#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float M[10][3];

    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        M[i][0] = (rand() % 101) / 10.0; 
        M[i][1] = (rand() % 101) / 10.0;

        M[i][2] = (M[i][0] + M[i][1]) / 2.0;
    }

    printf("Notas dos alunos:\n");
    printf("Aluno | Grau A | Grau B | Grau Parcial\n");
    for (int i = 0; i < 10; i++) {
        printf("%6d | %6.1f | %6.1f | %6.1f\n", i+1, M[i][0], M[i][1], M[i][2]);
    }

    return 0;
}

