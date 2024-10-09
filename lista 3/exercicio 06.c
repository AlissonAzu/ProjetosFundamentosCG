/*
Brincadeira do PAR ou ÍMPAR. Pergunte para o usuário se ele aposta em PAR ou ÍMPAR. Depois 
disso, peça para ele digitar um número de 0 a 5 (como se fosse mostrar os dedos da mão. Sorteie 
um número de 0 a 5 e some com o que o usuário digitou. Se o usuário escolheu PAR e o valor da 
soma for par OU se ele escolheu ÍMPAR e o valor da soma é ímpar, diga que ele venceu. Senão, diga 
que o programa venceu
*/  
/*
1 -> pedir pro usuario escolher par ou impar
2 -> pedir para o usuario escolher um numero
3 -> sortear o numero aleatorio de 0 a 5
4 -> somar os numeros do passo 2 e 3
5 -> Decidir
5.1 -> Se o resultado da soma for par e o usuario escolher par = VENCEU
5.2 -> Se o resultado da soma for par e o usuario escolher impar = PERDEU

5.3 -> Se o resultado da soma for impar e o usuario escolher par = PERDEU
5.4 -> Se o resultado da soma for impar e o usuario escolher impar = VENCEU
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(0));
    int ParOuImpar, ndele, nmaquina, resultado;
    printf("Você aposta em par ou ímpar?\n");
    printf("1 - Impar\n");
    printf("2 - Par\n");
    scanf("%d", &ParOuImpar);

    printf("Agora escolha um número\n");
    scanf("%d", &ndele);

    nmaquina = rand() % 6;
        printf("O número sorteado foi %d\n", nmaquina);
    resultado = nmaquina + ndele;
    int res = resultado % 2;
    if(res == 0 && ParOuImpar == 1) //Se resultado da soma par e o usuario escolher impar
    {
        printf("Você perdeu");
    }
    else if(res == 0 && ParOuImpar == 2)//Se resultado da soma par e o usuario escolher par
    {
        printf("Você ganhou!");
    }
    else if(res == 1 && ParOuImpar == 1) //Se resultado da soma impar e o usuario escolher impar
    {
        printf("Você ganhou!");
    }
    else
    {
        printf("Você perdeu!");
    }
    return 0;
}