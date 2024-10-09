/*
Crie um programa que verifica se um número inteiro informado pelo usuário é divisível por 3.
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Digite um numero inteiro\n");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("%d é divisivel por 3.", n);
    }
    else
    {
        printf("%d não é divisivel por 3.", n);
    }
    return 0;
}