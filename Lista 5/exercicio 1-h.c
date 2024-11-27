/*
Copiar os elementos em ordem inversa para outro vetor
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand (time(0));
    int v[10],vInverso[10];

    for(int i = 0; i < 10; i++) {
        v[i] = rand() % (90 -10 + 1) + 10;
    }    

    printf("Vetor gerado:\n");
    for(int i = 0; i < 10; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }
    printf("Valores Invertidos em outro vetor:\n");
    for (int i = 0; i < 10; i++) {
        vInverso[i] = v[9 - i];
        printf("vInverso[%d] = %d\n", i, vInverso[i]);
    }

    return 0;

}