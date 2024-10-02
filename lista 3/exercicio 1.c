/*
Escreva um programa que leia dois números e efetue uma divisão, mas somente se o divisor for 
diferente de zero; quando isto ocorrer, é mostrada uma mensagem de erro apropriada.
*/

#include <stdio.h>

int main ()
{
    int n , n2, resp;
    printf("Digite o primeiro número que ira ser dividido:\n");
    scanf("%d", &n);


    printf("Digite o segundo número que ira dividir:\n");
    scanf("%d", &n2);

    if (n2 != 0)
    {
        resp = n / n2;
        printf("O valor da divisão é %d", resp); 
    }
    else
    {
        printf("Erro! Digite o valor do divisor maior que zero!\n");
    }
    return 0;
}
