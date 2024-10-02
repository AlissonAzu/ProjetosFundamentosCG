/*
Crie um programa para informar quais e quantas notas são necessárias para entregar o mínimo de 
cédulas para um determinado valor informado pelo usuário considerando notas de R$ 100, R$ 50, 
R$ 20, R$ 10 e R$ 5 e R$ 1. Seu programa deve mostrar apenas as notas utilizadas. Por exemplo, ao 
solicitar R$18, o programa deve informar apenas a seguinte informação (note que não foram 
exibidas informações sobre as demais cédulas):
1 nota(s) de R$ 10.
1 nota(s) de R$ 5.
3 nota(s) de R$ 1
*/

#include <stdio.h>

int main ()
{
    int valor, quantidade;
    printf("Qual valor que deseja dar de troco?\n");
    scanf("%d", &valor);

    if(valor >= 100)
    {
        quantidade = valor / 100;
        printf("%d nota(s) de R$ 100\n", quantidade);
        valor -= quantidade * 100;
    }

    if(valor >= 50)
    {
        quantidade = valor / 50;
        printf("%d nota(s) de R$ 50\n", quantidade);
        valor -= quantidade * 50;
    }

    if(valor >= 20)
    {
        quantidade = valor / 20;
        printf("%d nota(s) de R$ 20\n", quantidade);
        valor -= quantidade * 20;
    }

    if(valor >= 10)
    {
        quantidade = valor / 10;
        printf("%d nota(s) de R$ 10\n", quantidade);
        valor -= quantidade * 10;
    }

    if(valor >= 5)
    {
        quantidade = valor / 5;
        printf("%d nota(s) de R$ 5\n", quantidade);
        valor -= quantidade * 5;
    }

    if(valor >= 1)
    {
        quantidade = valor / 1;
        printf("%d nota(s) de R$ 1\n", quantidade);
        valor -= quantidade * 1;
    }

    return 0;
}