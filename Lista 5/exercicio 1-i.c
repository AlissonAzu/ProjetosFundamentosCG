/*
Crie outros dois vetores com 10 elementos, vPares e vImpares. Copie para vPares todos os 
elementos pares e para vImpares todos os elementos ímpares. Depois disso, imprima o 
conteúdo de vPares e vImpares (OBS.: guarde o número de pares e ímpares para poder 
acessar os vetores depois).
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand (time(0));
    int v[10],vImpares[10], vPares[10], numPares = 0, numImpares = 0;

    for(int i = 0; i < 10; i++) {
        v[i] = rand() % (90 -10 + 1) + 10;
    }    

    printf("Vetor gerado:\n");
    for(int i = 0; i < 10; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }
   
   for (int i = 0; i < 10; i++) {
        if (v[i] % 2 == 0) {
            vPares[numPares++] = v[i];
        } else {
            vImpares[numImpares++] = v[i];
        }
    }

    printf("Vetor de pares: ");
    for (int i = 0; i < numPares; i++) {
        printf("%d ", vPares[i]);
    }
    printf("\n");

    printf("Vetor de ímpares: ");
    for (int i = 0; i < numImpares; i++) {
        printf("%d ", vImpares[i]);
    }
    printf("\n");

    return 0;
}



