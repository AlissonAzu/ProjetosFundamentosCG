/*
Um criador de pássaros deseja saber a quantidade de ração diária necessária para alimentar
seus pássaros. Cada pássaro consome 30 gramas de ração por dia. Escreva um programa que
leia o número de pássaros que o criador possui e calcule a quantidade total de ração
necessária por dia.
*/

#include <stdio.h>

int main()
{
    float passaros, racao;
    printf("Quantos passaros quer alimentar?\n");
    scanf("%f", &passaros);

    racao = passaros * 30;

    printf("A quantidade total de ração que voce ira precisar por dia é %g gramas", racao);

    return 0;
}