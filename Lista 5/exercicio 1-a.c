/*
Criar um vetor de 10 números v e inicialize-o sorteando valores de 10 a 90 para cada elemento.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand (time(0));
    int v[10];

    for(int i = 0; i < 10; i++) {
        v[i] = rand() % (90 -10 + 1) + 10;
    }    

    printf("Vetor gerado:\n");
    for(int i = 0; i < 10; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }
    return 0;

}

// min + rand() % (max - min + 1)
// i = i + 1
// i++
// i += 1