/*
Faça um algoritmo para receber um número qualquer do usuário e informar na tela se é par ou se
é ímpar.
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Digite um numero inteiro\n");
    scanf("%d", &n);

    int res = n % 2;
    if (res == 0)
    {
        printf("%d é par.", n);
    }
    else
    {
        printf("%d é impar.", n);
    }
    return 0;
}