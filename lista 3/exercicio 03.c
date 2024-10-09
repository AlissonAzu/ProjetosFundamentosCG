/*
Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo, imprimindo 
o resultado.
*/

#include <stdio.h>

int main()
{
    int n, resultadoa, resultadob;
    printf("Vamos fazer um jogo, digite um número!\n");
    scanf("%d", &n);

    if(n >= 0)
    {
        resultadoa = n * 2;
        printf("Como seu numero é igual ou maior que zero vou ultiplicar por 2, encontrei %d!", resultadoa);
    }
    else
    {
        resultadob = n * 3;
        printf("Como seu numero é menor que zero vou ultiplicar por 3, encontrei %d!", resultadob);
    }   
    return 0;
}