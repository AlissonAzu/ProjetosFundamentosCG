/*
Faça um conversor de câmbio de reais/dólar/euro. O usuário deve informar inicialmente a cotação 
de cada moeda em relação ao real. Depois apresente o seguinte menu:
1) Converter de Real para Euro
2) Converter de Real para Dólar
3) Converter de Euro para Dólar
4) Converter de Euro para Real
5) Converter de Dólar para Euro
6) Converter de Dólar para Real
Leia o valor a ser convertido na moeda de origem e imprima na tela a quantidade na moeda
destino.
*/

#include <stdio.h>

int main()
{
    int opcao;
    float valor, valorconvertido, valoremreal, cotacaodolar, cotacaoeuro;
    printf("Digite a cotação do Dolar em relação ao Real\n");
    scanf("%f", &cotacaodolar);

    printf("Digite a cotação do Euro em relação ao Real\n");
    scanf("%f", &cotacaoeuro);

    printf("Qual o valor que deseja converter?\n");
    scanf("%f", &valor);

    printf("Menu de Conversão:\n");
    printf("1) Converter de Real para Euro\n");
    printf("2) Converter de Real para Dólar\n");
    printf("3) Converter de Euro para Dólar\n");
    printf("4) Converter de Euro para Real\n");
    printf("5) Converter de Dólar para Euro\n");
    printf("6) Converter de Dólar para Real\n");
    scanf("%d", &opcao);

    if(opcao == 1)
    {
        valorconvertido = valor / cotacaoeuro;
        printf("O valor convertido é igual a %.2f Euro(s)", valorconvertido);
    }else if (opcao == 2){
        valorconvertido = valor / cotacaodolar;
        printf("O valor convertido é igual a %.2f Dolar(s)", valorconvertido);
    }else if (opcao == 3){
        valoremreal = valor * cotacaoeuro;
        valorconvertido = valoremreal / cotacaodolar;
        printf("O valor convertido é igual a %.2f Euro(s)", valorconvertido);
    }else if (opcao == 4){
        valoremreal = valor * cotacaoeuro;
        printf("O valor convertido é igual a %.2f Reai(s)", valoremreal);
    }else if (opcao == 5){
        valoremreal = valor * cotacaodolar;
        valorconvertido = valoremreal / cotacaoeuro;
        printf("O valor convertido é igual a %.2f Euro(s)", valorconvertido);
    }else if (opcao == 6){
        valoremreal = valor * cotacaodolar;
        printf("O valor convertido é igual a %.2f Real(s)", valoremreal);
    }
    return 0;
}