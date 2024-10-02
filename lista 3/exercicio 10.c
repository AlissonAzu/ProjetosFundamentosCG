/*
Dados não precisam ser tão “quadrados”, ou cúbicos para ser mais exato. Faça um programa que
simule dados de 4, 6, 8, 10, 12 ou 16 faces (apenas estes valores). Peça para o usuário informar no
começo do programa quantas faces quer, para depois fazer o sorteio.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int opcao;
    int sorteio;
    printf("Esconha o dado para ser sorteado\n");
    printf("1 - D4\n");
    printf("2 - D6\n");
    printf("3 - D8\n");
    printf("4 - D10\n");
    printf("5 - D12\n");
    printf("6 - D16\n");
    scanf("%d", &opcao);
    
    if (opcao == 1)
    {
        sorteio = 1 + rand() % 4;  
    }
    else if (opcao == 2)
    {
        sorteio = 1 + rand() % 6;
    }
    else if (opcao == 3)
    {
        sorteio = 1 + rand() % 8;
    }
    else if (opcao == 4)
    {
        sorteio = 1 + rand() % 10;
    }
    else if (opcao == 5)
    {
        sorteio = 1 + rand() % 12;
    }
    else if (opcao == 6)
    {
        sorteio = 1 + rand() % 16;
    }
    else
    {
        printf("Opção inválida\n");
        sorteio = -1;
    }

    if(sorteio >= 0)
    {
        printf("O valor sorteado é %d", sorteio);
    }

    return 0;
}