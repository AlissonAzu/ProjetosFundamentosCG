#include <stdio.h>

int main ()
{
    float dolares, reais, cotacao;
    printf("Quantos dolares você quer comprar?");
    scanf("%f", &dolares);

    printf("Qual o valor da cotação do dolar para o real?");
    scanf("%f", &cotacao);

    reais = dolares * cotacao;

    printf("Você vai precisar de %g reais", reais);

    return 0;
}