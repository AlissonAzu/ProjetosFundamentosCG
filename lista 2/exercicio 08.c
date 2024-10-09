/*
Um usuário deseja converter a temperatura de Celsius para Fahrenheit. Escreva um programa
que leia a temperatura em Celsius e exiba a temperatura equivalente em Fahrenheit.
*/

#include <stdio.h>

int main()
{
    float fahrenheit, celcius;
    printf("Quantos Graus Celcius você quer transformar para Fahrenheit?\n");
    scanf("%f", &celcius);

    fahrenheit = (1.8 * celcius) + 32;

    printf("Essa temperatura em Fahrenheit é %g graus", fahrenheit);

    return 0;
}
