/*
O lojista gostou tanto do seu programa anterior que encomendou outro. Dessa vez ele quer
que você calcule quanto cada cliente gastou na loja apenas informando o número de
camisetas, calças e cintos comprados. As camisetas custam R$ 25,00, as calças cem reais e os
cintos 40 reais. Some o valor da compra e ao final dê um desconto de 10 por cento sobre o
total. Exiba na tela o valor do desconto e o valor da compra.
*/

#include <stdio.h>

int main()
{
    float camisetas, calcas, cintos, valortotal, valordesconto, valorfinal;
    printf("Quantas Camisetas voce comprou?\n");
    scanf("%f", &camisetas);

    printf("Quantas Calças voce comprou?\n");
    scanf("%f", &calcas);

    printf("Quantas Cintos voce comprou?\n");
    scanf("%f", &cintos);

    valortotal = (camisetas * 25) + (calcas * 100) + (cintos * 40);

    valorfinal = valortotal - (valortotal * 0.1);

    valordesconto = valortotal - valorfinal;

    printf("O total da compra com desconto saiu %g Reais, ja com o descono de 10 %g Reais", valorfinal, valordesconto);

    return 0;
}