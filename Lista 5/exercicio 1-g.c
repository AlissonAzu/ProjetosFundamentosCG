/*
Imprimir o vetor em ordem invers
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
    for(int i = 9; i >= 0; i--) {
        printf("v[%d] = %d\n", i, v[i]);
    }
    return 0;

}