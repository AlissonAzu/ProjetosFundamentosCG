/*
Faça um algoritmo que leia os valores A, B, C e imprima na tela se a soma de A + B é menor que A 
+ C.
*/

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Digite o primeiro número\n");
    scanf("%d", &a);

    printf("Digite o segundo número\n");
    scanf("%d", &b);

    printf("Digite o terceiro número\n");
    scanf("%d", &c);

    if ((a+b) < (a+c))
    {
        printf("A soma dos dois primeiros números é menor que a soma dos dois últimos!\n");
    }
    else
    {
        printf("A soma dos dois primeiros números não é menor que a soma dos dois últimos!\n");
    }
    return 0;
}


