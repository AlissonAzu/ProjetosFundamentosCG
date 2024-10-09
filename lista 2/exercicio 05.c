/*
Um motorista deseja encher o tanque do seu carro com gasolina. Escreva um algoritmo para 
ler o preço do litro da gasolina e o valor que o motorista tem disponível para abastecer.
Calcule quantos litros ele conseguiu colocar no tanque e exiba na tela.
*/
#include <stdio.h>

int main()
{
    float valorabastecer, tanque, valorgasolina;
    printf("Qual valor você tem disponivel para abastecer?\n");
    scanf("%f", &valorabastecer);

    printf("Quanto está custando o litro da gasolina?\n");
    scanf("%f", &valorgasolina);

    tanque = valorabastecer / valorgasolina;

    printf("Você pode colocar %g Litros de gasolina\n", tanque);

    return 0;
}

