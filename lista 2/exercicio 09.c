/*
Durante uma liquidação uma loja resolveu dar quinze por cento de desconto nas compras
feitas pelos clientes. Faça um programa que leia o valor da compra e escreva o valor da
compra com o desconto. 
*/

#include <stdio.h>

int main()
{
    float valor, valorfinal;
    printf("Qual foi o valor total da compra?\n");
    scanf("%f", &valor);

    valorfinal = valor - (valor * 0.15);

    printf("Seu valor final com desconto é %g reais", valorfinal);

    return 0;
}