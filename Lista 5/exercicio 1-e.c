/*
Encontrar o maior e o menor valor dos elementos do vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand (time(0));
    int v[10],maior, menor;

    for(int i = 0; i < 10; i++) {
        v[i] = rand() % (90 -10 + 1) + 10;
    }    

    printf("Vetor gerado:\n");
    for(int i = 0; i < 10; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }
    maior = menor = v[0];
    for(int i = 1; i < 10; i++) {
        if (v[i] > maior) maior = v[i];
        if (v[i] < menor) menor = v[i];
    }
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;

}