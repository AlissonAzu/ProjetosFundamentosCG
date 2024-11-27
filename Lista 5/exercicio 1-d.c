/*
Calcular a média dos valores do vetor
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand (time(0));
    int v[10];
    float soma = 0, media;
    for(int i = 0; i < 10; i++) {
        v[i] = rand() % (90 -10 + 1) + 10;
    }    

    printf("Vetor gerado:\n");
    for(int i = 0; i < 10; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }
    for(int i = 0; i < 10; i++) {
        soma = soma + v[i];
    }
    media = soma/10;
    
    printf("média dos valores: %.2f\n", media);
    
    return 0;
    

}