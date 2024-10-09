/*
A loja de eletrônicos TechMundo vende uma certa quantidade de smartphones e uma
quantidade de tablets a cada dia. Cada smartphone custa R$ 1000,00 e cada tablet custa R$
1500,00. Ao final do dia, o dono quer saber quanto arrecadou com a venda dos smartphones
e dos tablets. Escreva um programa que leia o número de smartphones e tablets vendidos em
um dia e calcule o total arrecadado.
*/
#include <stdio.h>

int main()
{
    float smartphones, tablets, valorfinal;
    printf("Quantos smartphones foram vendidos?\n");
    scanf("%f", &smartphones);

    printf("Quantos tablets foram vendidos?\n");
    scanf("%f", &tablets);

    valorfinal = (smartphones * 1) + (tablets * 1.5);

    printf("Foi arrecadado um total de %g mil reais", valorfinal);

    return 0;
}
