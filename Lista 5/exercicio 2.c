/*
Faça um programa que leia 5 valores para dentro de um vetor e imprima o resultado de cada 
valor multiplicado pela sua posição no vetor. Por exemplo: 1, 2, 3, 4 e 5 imprimirá na tela 0, 2, 6, 
12 e 20
*/
#include <stdio.h>

int main() {
    int v[5];

    printf("Digite 5 valores:\n");
    for (int i = 0; i < 5; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    printf("\nResultado dos valores multiplicados pela posição:\n");
    for (int i = 0; i < 5; i++) {
        printf("v[%d] * %d = %d\n", i, i, v[i] * i);
    }

    return 0;
}
