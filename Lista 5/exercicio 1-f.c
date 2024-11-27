/*
Imprimir a soma e o produto acumulado dos valores dos elementos do vetor
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int const TAMANHO = 10;
int main()
{
    srand (time(0));
    int v[10], soma;
    float produto=1;
    for(int i = 0; i < TAMANHO; i++) {
        v[i] = rand() % (90 -10 + 1) + 10;
    }    

    printf("Vetor gerado:\n");
    for(int i = 0; i < TAMANHO; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }
    for(int i = 0; i < TAMANHO; i++) {
        soma += v[i];
        produto *= v[i];
    }
    printf("Soma dos valores do vetor: %d\n", soma);
    printf("Produto acumulado dos valores do vetor: %g\n", produto);
    
    return 0;

}